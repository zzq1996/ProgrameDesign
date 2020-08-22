//
// Created by zhangzhiqiang on 2020/5/4.
//

#ifndef PROGRAMEDESIGN_MAX4_H
#define PROGRAMEDESIGN_MAX4_H

template <class T>

class Max4{
    T a,b,c,d;
    T Max(T a,T b){
        return (a>b)?a:b;
    }
public:
    Max4(T,T,T,T);   //构造函数
    T Max();     //比较四个对象大小

};

template <class T>   //定义成员函数 要再次申请模板
Max4<T>::Max4(T x1,T x2,T x3,T x4):a(x1),b(x2),c(x3),d(x4){}

template <class T>      //定义成员函数 要再次申请模板
T Max4<T>:: Max(){          //要将Max4<T>看作一个整体
    return Max(Max(a,b),Max(c,d));
}


#endif //PROGRAMEDESIGN_MAX4_H