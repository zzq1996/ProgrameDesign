//
// Created by zhangzhiqiang on 2020/2/20.
//

#ifndef PROGRAMEDESIGN_LINKEDSTACK_H
#define PROGRAMEDESIGN_LINKEDSTACK_H

#include "Stack.h"

class LinkedStack :public Stack{
    struct Node{
        int content;
        Node *next;
    }*first;
public:
    LinkedStack();
    bool push (int i);
    bool pop(int& i);
};


#endif //PROGRAMEDESIGN_LINKEDSTACK_H
