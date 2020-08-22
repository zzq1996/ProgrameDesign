//
// Created by zhangzhiqiang on 2020/1/30.
//

#ifndef PROGRAMEDESIGN_POINTER_H
#define PROGRAMEDESIGN_POINTER_H


struct A{
    int i=20;
    double d;
    char ch;
};

struct Node{
    int content;//代表结点的数据
    Node *next;//代表后一个节点的地址
};

struct Node2{
    int no;//小孩的编号
    Node2 *next;//指向下一个小孩的指针
};

class Pointer {

public:
     void operator2();
     void operator3();
     void operator4();
     void operator5(int *a,int num);//等价于static void operator5(int a[],int num);
     void operator6(A *p);
     void operator7(int *p1,int *p2);
     int calculate_roots(double a,double b,double c,double *root1,double *root2);
     void show_roots();
     void operator8(int *p,const int *P1,const int * const P2);
     void operator9();
     void operator10();
     Node *input();//输入数据建立链表
     void sort(Node *h);//选择排序
     void output(Node *h);//输出数据
     void remove(Node *h);//删除链表
     void josephus();
     void reverse(char *str);
     void swap(int **x,int **y);

};


#endif //PROGRAMEDESIGN_POINTER_H
