#ifdef MY_DLL_EXPORTS
#define MY_DLL_API __declspec(dllexport)
#else
#define MY_DLL_API __declspec(dllimport)
#endif

#include "Interface.h"
#include<IVR.hpp>
#include <Spatial.hpp>



namespace ivr {

    class MY_DLL_API MyScriptClass : public IScriptClass, public Spatial
    {
        IVR_CLASS(MyScriptClass, Spatial)

    private:
        int some_data;

    public:

        static void _register_methods(); 

        MyScriptClass();
        ~MyScriptClass();

        void _init(); // 必须要有

        void do_something(int index);//自定义方法

        int get_some_data();//自定义方法
    };

}