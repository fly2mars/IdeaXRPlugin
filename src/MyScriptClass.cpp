//#include "pch.h"
#include "MyScriptClass.h"

using namespace ivr;

void MyScriptClass::_register_methods()
{
    register_method("do_something", &MyScriptClass::do_something);
    register_method("get_some_data", &MyScriptClass::get_some_data);
}

MyScriptClass::MyScriptClass()
{

}

MyScriptClass::~MyScriptClass()
{
}
    

void MyScriptClass::_init()
{
    some_data = 1;
}

void MyScriptClass::do_something(int index)
{
    //  可在此处调用第三方库的接口函数 
    index += 1;
    return;
}

int MyScriptClass::get_some_data()
{
    //  可在此处调用第三方库的接口函数

    return 47;
}
