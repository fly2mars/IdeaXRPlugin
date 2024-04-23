#include <exception>
#include <iostream>
#include <string>
#include "dlfcn.h"
#include "../src/Interface.h"


//extern "C" IScriptClass * create();

class DynamicLoader {
public:
    // Constructor
    DynamicLoader():moduleHandle(nullptr){}

    // Destructor
    ~DynamicLoader() {
        if (!moduleHandle) {
            dlclose(moduleHandle);
        }
    }

    IScriptClass* LoadModule(std::string sModuleFilePath)
    {
        void* moduleHandle = dlopen(sModuleFilePath.c_str(), RTLD_NOW | RTLD_GLOBAL);

        if (!moduleHandle) throw  std::runtime_error(dlerror());
        //createModule is a pointer to the create function in the module
        IScriptClass* (*createModule)() = (IScriptClass * (*)())dlsym(moduleHandle, "create");
        if (!createModule)   throw  std::runtime_error(dlerror());
        return createModule();
    }

    

private:
    void* moduleHandle;
};


int main() {
    try{
        std::cout << "Load dll...\n";
        DynamicLoader loader;
        std::string dll_path = std::string(DLL_PATH) + "/IVRNative.dll";
        IScriptClass*pFunc = loader.LoadModule(dll_path);
        pFunc->do_something(2);
        std::cout << pFunc->get_some_data() << std::endl;
       

        // Work with your service object...

    }catch (const std::runtime_error& e){
        std::cerr << "Error: " << e.what() << std::endl;
    }
    
    return 0;
}