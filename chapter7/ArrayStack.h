//
// Created by zhangzhiqiang on 2020/2/20.
//

#ifndef PROGRAMEDESIGN_ARRAYSTACK_H
#define PROGRAMEDESIGN_ARRAYSTACK_H

#include "Stack.h"

class ArrayStack : public Stack{
    int elements[100],top;
public:
    ArrayStack();
    bool push(int i);//派生类定义与基类纯虚函数相同型构的成员函数，是对基类成员函数的重定义
    bool pop(int& i);
};


#endif //PROGRAMEDESIGN_ARRAYSTACK_H
