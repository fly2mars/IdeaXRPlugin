#pragma once
// IScriptClass.h
class IScriptClass {
public:
    virtual ~IScriptClass() {}
    virtual void do_something(int index) = 0;
    virtual int get_some_data() = 0;
};