//
// Created by zhangzhiqiang on 2020/2/6.
//

#include "Test5.h"
#include <iostream>
#include <cmath>
using namespace std;

void Test5::f(int &x, int y) {
    y=x+y;
    x=y%3;
    cout<<x<<"\t"<<y<<endl;
}

void Test5::test4() {
    double a[7][2];
    double avg_max,avg_min;
    for (int i = 0; i < 7; ++i) {
        cout<<"输入周"<<i+1<<"的最高温度和最低温度：\n";
        cin>>a[i][0]>>a[i][1];
    }

    for (int j = 0; j < 7; ++j) {
        avg_max=avg_max+a[j][0];
        avg_min=avg_min+a[j][1];
    }
    avg_max=avg_max/7;
    avg_min=avg_min/7;
    cout<<"平均最高温度："<<avg_max<<"，平均最低温度："<<avg_min<<endl;

}

bool Test5::test5(int x) {
    int count=1,y=x;
    bool b=true;
    if(x/10==0){
        b= false;
    }else{
        while(y/10!=0){//求出x的位数
            y=y/10;
            count++;
        }
    }
    int a[count];
    int i=1;//控制变量，取x的各位位数
    for (int *p = &a[count-1],*q=&a[0]; p>=q; --p) {//通过指针访问数组元素
        *p=(x%(i*10))/(i);
        i=i*10;

    }
    for (int *p = &a[0],*q=&a[count-1]; p<=q; p++,q--) {//通过指针访问数组元素
        if(*p!=*q){
            b= false;
        }
    }
    return b;
}

void Test5::int_to_string(int n, char *str) {
    int count=1,y=n;
    if(n>=0){//非负数
        if(n/10!=0){
            while(y/10!=0){//求出x的位数
                y=y/10;
                count++;
            }
            int i=1;//控制变量，取x的各位位数
            for(int h=1;h<count;h++){
                i=i*10;
            }
            for (int j=0;j<count;j++) {//通过指针访问数组元素

                *(str+j)=(n/i)+'0';
                n=n%i;
                i=i/10;
            }
        }else{
            //一位数
            *str=n+'0';
        }
//        for (int j=0;j<count;j++) {//通过指针访问数组元素
//            cout<<*(str+j);
//        }

    }else{//负数
        *str='-';
        int m=-n,o=-n;
        count=1;
        if(m/10!=0){
            while(o/10!=0){//求出x的位数
                o=o/10;
                count++;
            }
            int i=1;//控制变量，取x的各位位数
            for(int h=1;h<count;h++){
                i=i*10;
            }
            for (int j=1;j<=count;j++) {//通过指针访问数组元素
                *(str+j)=(m/i)+'0';
                m=m%i;
                i=i/10;
            }
        }else{
            //一位数
            *(str+1)=n+'0';
        }
//        for (int j=0;j<=count;j++) {//通过指针访问数组元素
//            cout<<*(str+j);
//        }
    }
}

int Test5::test7(double a, double b, double c, double *root1, double *root2) {
    double t =b*b-4*a*c;
    if(t==0){
        *root1=*root2=(-b)/(2*a);
        return 1;
    }else if(t<0){
        return 0;
    }else if(t>0){
        *root1=(-b+sqrt(t))/2*a;
        *root1=(-b-sqrt(t))/2*a;
        return 2;
    }
}

void Test5::test8(int *a,int *b,int *c) {
    *a=*b=*c=0;
    cout<<"输入字符串，以'#'结束:\n";
    char s;
    while(s!='#'){
        cin>>s;
        if(s>='A'&&s<='Z'){
            (*a)++;
        }else if(s>='a'&&s<='z'){
            (*b)++;
        }else if(s>='0'&&s<='9'){
            (*c)++;
        }
    }
    cout<<"大写字母个数："<<*a<<"，小写字母个数："<<*b<<"，数字个数："<<*c<<endl;
}

void Test5::swap(int *a, int m, int n) {
    for (int i = m,j=0; i<(m+n); ++i,++j) {
            int temp=*(a+j);
            *(a+j)=*(a+i);
            *(a+i)=temp;
    }
}

void Test5::test11(int m, int n, int *p) {
    //将m行，n列的矩阵看作m个元素，每个元素有n元素的一维数组
        int row_max=0,cel=0,cel_max=0;
    for (int i = m; i > 0; --i) {
        cel=0;
        row_max=*(p+(m-i)*n);
        //找出每行中的最大值
        for(int j=(m-i)*n;j<=(m-i)*n+3;j++){
            if(row_max<*(p+j)){
                row_max=*(p+j);
                cel++;
            }
        }
        cel_max=row_max;
        //求出每列的最大值
        for(int k=0;k<m;k++){
            if(cel_max<*(p+cel+n*k)){
                cel_max=*(p+cel+n*k);
            }
        }

        if(cel_max==row_max){
            cout<<row_max<<endl;
        }

    }
}
