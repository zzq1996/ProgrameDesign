//
// Created by zhangzhiqiang on 2020/2/20.
//

#ifndef PROGRAMEDESIGN_STACK_H
#define PROGRAMEDESIGN_STACK_H


class Stack {
public:
    virtual bool push(int i)=0;//声明纯虚函数push
    virtual bool pop(int& i)=0;//声明纯虚函数pop
};


#endif //PROGRAMEDESIGN_STACK_H
