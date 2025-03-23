#ifndef TEST_H
#define TEST_H


#include<godot_cpp/classes/node2d.hpp>

using namespace godot;

class Test : public Node2D {
    GDCLASS(Test,Node2D);//定义GDCLASS宏，传入类名和继承的类名

protected:
    static void _bind_methods();
    Test();
    ~Test();

public:
    void start_test();

};

#endif