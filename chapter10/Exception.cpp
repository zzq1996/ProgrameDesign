//
// Created by zhangzhiqiang on 2020/5/6.
//

#include "Exception.h"
#include <iostream>

int Exception::divide(int x, int y) {
    if(y==0){
        throw 0;
    }
    return x/y;
}

void Exception::f() {
    int a,b;
    try {
        std::cout<<"请输入两个数:\n";
        std::cin>>a>>b;
        int r=divide(a,b);
        std::cout<<a<<"除以"<<b<<"的商为："<<r<<std::endl;
    }catch (int){
        std::cout<<"除数不能为0，请重新输入两个数：\n";
        std::cin>>a>>b;
        int r=divide(a,b);
        std::cout<<a<<"除以"<<b<<"的商为："<<r<<std::endl;
    }


}
