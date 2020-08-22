//
// Created by zhangzhiqiang on 2020/2/14.
//

#include "Section4.h"
#include "iostream"

using namespace std;

Section4::Section4() :y(a),f(1.0) {  //对引用类型和常量进行初始化  &y=a,f=1.0
}

Section4::Section4(int a1, int b1):y(b),f(2.0) {
    a=a1;
    b=b1;
}

Section4::Section4(int a1, int b1, int c1) :y(c),f(3.0){
    a=a1;
    b=b1;
    c=c1;
}

void Section4::print_member() {
    cout<<"a:"<<a<<",b:"<<b<<",c:"<<c<<",&y"<<y<<",f:"<<f<<endl;
}
