#include "test.h"

Test::Test(){

}

Test::~Test(){

}

void Test::start_test(){
    UtilityFunctions::print("Hello world from GDExtension");
}

void Test::_bind_methods(){
    //将cpp中的start_test方法绑定至godot，godot侧需使用start_test_godot
    ClassDB::bind_method(D_METHOD("start_test"), &Test::start_test); //如果绑定的函数有输入，则需要改成("start_test", "arg1")的形式
}