//
// Created by zhangzhiqiang on 2019/12/12.
//

#include <iostream>
#include <cmath>
#include <typeinfo>
#include "c3.h"
using namespace std;

int c3::add(int x,int y){
    return x+y;
}

void c3::getInput() {
    int i;
    double d;
    string s;

    //从键盘中读取一个整数给变量i
    cin>>i;
    //从键盘中读取一个浮点数给变量d
    cin>>d;
    //从键盘中读取字符串给变量s
    cin>>s;

    cout<<"i:"<<i<<",d:"<<d<<",s:"<<s<<endl;
}

void c3::cmp(){
    float d1=0.1,d2=0.2;
    //判断0.1+0.2==0.3？
    cout<<((d1+d2)==0.3)<<endl;
    //判断d1==d2
    cout<<"d1==d2:"<<(d1==d2)<<endl;
    cout<<"fabs(d1-d2)<1e-6:"<<(fabs(d1-d2)<1e-6)<<endl<<endl;
    //判断d1!=d2
    cout<<"d1!=d2:"<<(d1!=d2)<<endl;
    cout<<"fabs(d1-d2)>1e-6:"<<(fabs(d1-d2)>1e-6)<<endl;
}

void c3::fuzhi() {

    int a=-1000;
    unsigned int u=10;
    cout<<"a+u="<<a+u<<endl;
    double b=10.0;
    cout<<"b="<<b<<endl;

}

void c3::etc() {
    int i=-10;
    unsigned int j=3;
    cout<<"i+j:"<<i+j<<endl;
    cout<<"i+j:"<<i+(int)j<<endl;
    cout<<"i+j:"<<(double)i+(double)j<<endl;
}

void c3::che(int a,int b) {

    //不借助中间变量，实现a，b数值互换
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"a:"<<a<<",b:"<<b<<endl;

    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"a:"<<a<<",b:"<<b<<endl;


}

void c3::print() {

    cout<<"3/5*12.3="<<3/5*12.3<<"，typeid:"<<typeid(3/5*12.3).name()<<endl;
    cout<<"'a'+10*5.2="<<'a'+10*5.2<<"，typeid:"<<typeid('a'+10*5.2).name()<<endl;
    cout<<"12U+3.0F*24L="<<12U+3.0F*24L<<"，typeid:"<<typeid(12U+3.0F*24L).name()<<endl;
}

bool c3::isOdd(int x) {
    cout<<x<<"&1="<<(x&1)<<",typeid:"<< typeid(x&1).name()<<endl;
    return (x & 1) == 1;
}

void c3::intToFloat() {
    int i=pow(2,31)-1;
    cout<<"int i="<<i<<",typeid:"<< typeid(i).name()<<",to_string:"<<to_string(i)<<",hex:"<<hex<<i<<",sizeof(i)="<< sizeof(i)<<endl;
    cout<<"float i="<<(float)i<<",typeid:"<< typeid((float)i).name()<<",to_string:"<<to_string((float)i)<<",hex:"<<hex<<(float)i<<",sizeof((float)i)="<< sizeof((float)i)<<endl;
    cout<<"double i="<<(double)i<<",typeid:"<< typeid((double)i).name()<<",to_string:"<<to_string((double)i)<<",hex:"<<hex<<(double)i<<",sizeof((double)i)="<< sizeof((double)i)<<endl;

}

void c3::jisuan(int i) {
    cout<<"(i+1)*(++i)+(i++):"<<(i+1)*(++i)+(i++)<<endl;
}


