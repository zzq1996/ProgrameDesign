//
// Created by zhangzhiqiang on 2020/1/14.
//

#include "Test4.h"
#include <iostream>

using namespace std;

int Test4::digit(int n, int k) {
        for (int i = 0; i <k-1 ; ++i) {
            n=n/10;
        }
        return n%10;
}

int Test4::fib(int n) {
    int count=0;
    count++;
    if(n==1 ||n==2){
        return 1;
    }else {
        return fib(n-1)+fib(n-2);
    }
}

double Test4::h(int n, double x) {

    //递归
    if(n==0){
        return 1;
    }else if (n==1){
        return 2*x;
    }else{
        return 2*x*h(n-1,x)-2*(n-1)*h(n-2,x);
    }

//    //迭代
//    double sum;
//    if(n==0){
//        sum=1;
//    }else if (n==1){
//        sum=2*x;
//    }else{
//        for (int i = n; i <=2 ; --i) {
//
//        }
//    }
//    return sum;

}

int Test4::ack(unsigned int m, unsigned int n) {
    if(m==0){
        return n+1;
    }else if(n==0){
        return ack(m-1,1);
    }else{
        return ack(m-1,ack(m,n-1));
    }
}

int Test4::path(int n) {
    if(n==2){
        return 1;
    }else if(n==3){
        return 2;
    }else if(n==4){
        return 4;
    }else{
        if(n%2==0){
            return path(n-1)+path(n-2)+path(n-3);
        }else {
            return path(n-1)+path(n-2);
        }
    }
}

int Test4::cow( int n) {
    if(n<4 && n>0){
        return 1;
    }else{
        return cow(n-3)+cow(n-1);
    }
}

