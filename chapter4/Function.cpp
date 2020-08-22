//
// Created by zhangzhiqiang on 2020/1/12.
//

#include "Function.h"
#include <iostream>

using namespace std;

//求n的阶乘
int Function::factorial(int n) {
    int sum=1;
    for(int i=1;i<=n;i++){
        sum=sum*i;
    }
    return sum;
}

double Function::power(double x, int n) {
    double sum = 1;
    if(n==0){
        sum=0;
    }else if(n>0){
        for(int i=n;i>0;i--){
            sum=x*sum;
        }
    }else if(n<0){
        for(int i=n;i<0;i++){
            sum=x*sum;
        }
        sum=1/sum;
    }
    return sum;
}

void Function::display_message(double score) {
    if(score>=90){
        cout<<"优"<<endl;
    }else if(score>=80){
        cout<<"良"<<endl;
    }else if(score>=70){
        cout<<"中"<<endl;
    }else if(score>=60){
        cout<<"及格"<<endl;
    }else{
        cout<<"不及格"<<endl;
    }

}

bool Function::is_prime(int n) {
    for (int i = 2; i <n ; ++i) {
        if(n%i==0){
           return false;
        }
    }
    return true;
}

void Function::print_prime(int n, int count) {
    cout<<n<<",";
    if(count%6==0){
        cout<<endl;
    }
}

//求范围内的素数
void Function::show_prime() {
    int n,count=1;
    cout<<"输出一个正整数:"<<endl;
    cin>>n;
    if(n<2){
        cout<<"输入错误"<<endl;
    }else{
        cout<<2<<",";
        for (int i = 3; i < n; i=i+2) {
            if(Function::is_prime(i)){
                count++;
                Function::print_prime(i,count);
            }
        }
        cout<<endl;
    }
}

//求n的阶乘
int Function::fib(int n) {
    if(n==1 || n==2){
        return 1;
    }else{
        return fib(n-2)+fib(n-1);
    }
}

//求两个数的最大公约数
int Function::gcd(int x, int y) {
//    int d;
//    d=(x<=y)?x:y;
//    while(d>1){
//        if(x%d==0 && y%d==0){
//            break;
//        }
//        d--;
//    }
//    return d;

    return (y==0)?x:gcd(y,x%y);

}

//汉诺塔问题
void Function::hanoi(char x, char y, char z, int n) {
    if(n==1){
        cout<<"1:"<<x<<"→"<<y<<endl;
    }else{
        hanoi(x,z,y,n-1);
        cout<<n<<":"<<x<<"→"<<y<<endl;
        hanoi(z,y,x,n-1);
    }

}



