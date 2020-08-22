//
// Created by zhangzhiqiang on 2020/2/6.
//

#include "Reference.h"

//交换两个int型变量
void Reference::swap(int &x, int &y) {
    int t;
    t=x;
    x=y;
    y=t;
}

//交换两个int *指针变量的值
void Reference::swap(int *&x, int *&y) {
    int *t;
    t=x;
    x=y;
    y=t;
}

void Reference::f(const int &x) {
//    x=1;//Error
}

//返回数组中最大元素的引用
int &Reference::max(int *x, int num) {
    int i,j;
    j=0;
    for (i = 1; i < num; i++) {
        if(x[i]>x[j]){
            j=i;
        }
    }
    return x[j];
}
