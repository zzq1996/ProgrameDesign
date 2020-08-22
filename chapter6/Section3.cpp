//
// Created by zhangzhiqiang on 2020/2/14.
//

#include "Section3.h"

void func(Stack *p){

}

void Stack::f() {

    //在成员函数f中创建类的实例——对象
    Stack section3;
    //该对象可访问该类的所有成员
    section3.b=34;

}

void Stack::g(int i) {
    x=i;
    func(this);//将对象作为整体操作

}

