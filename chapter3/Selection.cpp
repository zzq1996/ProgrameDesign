//
// Created by zhangzhiqiang on 2019/12/21.
//

#include "Selection.h"
#include <iostream>
#include <cmath>
#include <cfloat>

using namespace std;

//从键盘中输入三个整数，输出最大数
void Selection::test1() {

    int a,b,c;
    cout<<"请输入三个整数，用\"空格或回车\"隔开:"<<endl;
    cin>>a>>b>>c;

//    cout<<"请输入第1个数："<<endl;
//    cin>>a;
//    cout<<"请输入第2个数："<<endl;
//    cin>>b;
//    cout<<"请输入第3个数："<<endl;
//    cin>>c;
    if(a>=b){
        if(a>c){
            cout<<"最大数为"<<a<<endl;
        }else{
            cout<<"最大数为"<<c<<endl;
        }
    }else {
        if(b>c){
            cout<<"最大数为"<<b<<endl;
        }else{
            cout<<"最大数为"<<c<<endl;
        }
    }



}

void Selection::test2() {
    //输入a、b、c，求一元二次方程ax2+bx+c=0的实根
    double a,b,c;
    cout<<"请输入a、b、c的值，用\"空格或回车\"隔开:"<<endl;
    cin>>a>>b>>c;
    if((b*b-4*a*c)<0){
        cout<<"该方程没有实数根"<<endl;
    }else if((b*b-4*a*c)==0){
        cout<<"该方程有两个相等的实数根，x1=x2="<<-b/(2*a)<<endl;
    }else{
        cout<<"该方程有两个不相等的实数根，x1="<<(-b+sqrt(b*b-4*a*c))/(2*a)<<",x2="<<(-b-sqrt(b*b-4*a*c))/(2*a)<<endl;
    }

}

void Selection::test3() {
    double a,b,c;
    cout<<"请输入a、b、c的值，用\"空格或回车\"隔开:"<<endl;
    cin>>a>>b>>c;
    bool ab=Selection::cmpFloat(a,b);
    bool bc=Selection::cmpFloat(b,c);
    bool rt=((a*a+b*b==c*c) || (a*a==b*b+c*c) || (b*b==a*a+c*c));
    if((a+b)>c && (a+c)>b && (b+c)>=a){
        if((ab|bc) && (ab&bc)==0){
            cout<<"等腰三角形"<<endl;
        }else if(ab & bc){
            cout<<"等边三角形"<<endl;
        }else if((bool)(ab|bc) & rt){
            cout<<"等腰直角三角形"<<endl;
        }else if(rt){
            cout<<"直角三角形"<<endl;
        }else{
            cout<<"三角形"<<endl;
        }
    }else{
        cout<<"不是三角形"<<endl;
    }
}

bool Selection::cmpFloat(float a,float b) {
    //c++中的abs函数已经被重载，因此可以适用int, long int, float等各种类型。
    //如果是c请调用fabs用于浮点数的绝对值。
     if (a==b) return true;
     if (abs(a-b)<DBL_EPSILON ) return true;
     if (abs(a>b)){
         return abs((a - b) / a > DBL_EPSILON) != 0;
     }else{
         return abs((a - b) / b > DBL_EPSILON) != 0;
     }
}

void Selection::test4() {
    int h1,h2,m1,m2,s1,s2;
    cout<<"输入第一个时刻(时 分 秒)"<<endl;
    cin>>h1>>m1>>s1;
    cout<<"输入第二个时刻(时 分 秒)"<<endl;
    cin>>h2>>m2>>s2;
    if(0<=h1 && h1<=24 && 0<=m1 && m1<=60 && s1>=0 && s1<=60 && 0<=h2 && h2<=24 && 0<=m2 && m2<=60 && s2>=0 && s2<=60){
        if(h1>h2){
            cout<<"第二个时刻在前"<<endl;
        }else if(h1<h2){
            cout<<"第一个时刻在前"<<endl;
        }else if(m1>m2){
            cout<<"第二个时刻在前"<<endl;
        }else if(m1<m2){
            cout<<"第一个时刻在前"<<endl;
        }else if(s1>s2){
            cout<<"第二个时刻在前"<<endl;
        }else if(s1<s2){
            cout<<"第一个时刻在前"<<endl;
        }
    }else{
        cout<<"输入时刻不正确"<<endl;
    }

}

void Selection::test5() {
    int a;
    cout<<"输出数字（0～6）:"<<endl;
    cin>>a;
    cout<<"a="<<a<<endl;
    switch(a){
        case 0:cout<<"Sunday"<<endl;
            break;
        case 1:cout<<"Monday"<<endl;
            break;
        case 2:cout<<"Tuesday"<<endl;
            break;
        case 3:cout<<"Wednesday"<<endl;
            break;
        case 4:cout<<"Thursday"<<endl;
            break;
        case 5:cout<<"Friday"<<endl;
            break;
        case 6:cout<<"Saturday"<<endl;
            break;
        default:cout<<"input error"<<endl;
            break;
    }
}

void Selection::test6() {

    //计算某年某月的天数
    int year,month;
    cout<<"输入年份 月数"<<endl;
    cin>>year>>month;
    switch(month){
        case 2:
            if((year%4==0 || year%400==0) && year%100!=0){
                cout<<year<<"年"<<month<<"月共29天"<<endl;
            }else{
                cout<<year<<"年"<<month<<"月共28天"<<endl;
            }
            break;
        case 1: case 3: case 5:case 7:case 8:case 10:case 12:
            cout<<year<<"年"<<month<<"月共31天"<<endl;
            break;
        case 4:case 6:case 9:case 11:
            cout<<year<<"年"<<month<<"月共30天"<<endl;
            break;
    }

}


