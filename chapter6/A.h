//
// Created by zhangzhiqiang on 2020/2/15.
//

#ifndef PROGRAMEDESIGN_A_H
#define PROGRAMEDESIGN_A_H


#include <cstdlib>
#include <cstring>

const int NUM=32;

class A {
private:
    int a;
    double b;
    static A *p_free;//用于指向A类对象的自由空间链表
    A *next;//用于实现自由空间结点的链接
public:
    static void *operator new(size_t size);//声明new重载函数
    static void operator delete(void *p);//声明delete重载函数
};

A *A::p_free=nullptr;

void *A::operator new(size_t size) {
    A *p;
    if(p_free== nullptr){//第一次创建对象或上次申请的空间已用完
        p_free=(A *)malloc(size*NUM);//申请能存储NUM个A类对象的大空间
        for(p=p_free;p!=p_free+NUM-1;p++){//建立自由结点链表
            p->next=p+1;
        }
        p->next= nullptr;
    }
    //在自由结点链表中为当前对象分配空间
    p=p_free;
    p_free=p_free->next;
    memset(p,0,size);//把对象空间初始化为全"0"。如果类中有构造函数，这个操作可以不要
    return p;
}

void A::operator delete(void *p) {
    //把p指向的对象空间归还到自由结点链表中（没有归还到堆中）
    ((A *)p)->next=p_free;
    p_free=(A *)p;

}


#endif //PROGRAMEDESIGN_A_H
