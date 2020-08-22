//
// Created by zhangzhiqiang on 2019/12/21.
//

#include "Expression.h"
#include <iostream>
#include <cmath>
using namespace std;


void Expression::test1() {
    double x;
    cout<<"请输入一个数："<<endl;
    cin>>x;
    cout<<x<<"的平方是："<<x*x<<endl;
    cout<<x<<"的立方是："<<x*x*x<<endl;
    cout<<x<<"的平方根是："<<sqrt(x)<<endl;

}

void Expression::test2() {

    int n;
    double a;
    cout<<"请输入首项:"<<endl;
    cin>>a;
    cout<<"请输入项数:"<<endl;
    cin>>n;
    cout<<"前n项的和为："<<(a+a*n)*n/2<<endl;

}
