//
// Created by zhangzhiqiang on 2019/12/23.
//

#include <iostream>
#include <cmath>
#include "Loop.h"

using namespace std;
void Loop::test1() {
    //求n！
    int n,m,sum;
    cout<<"输入n的值:"<<endl;
    cin>>n;
    //保存输入的值
    m=n;
    //保存结果
    sum=1;

    while (n>0){
        sum=n*sum;
        n--;
    }


    for(int i=1;i<=n;i++){
        sum=sum*i;
    }

    do{
        sum =n*sum;
        n--;
    }while (n>0);

    cout<<m<<"!="<<sum<<endl;
}

void Loop::test2() {
    int n,num,sum=0;
    cout<<"输入整数的个数："<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"请输入第"<<i+1<<"个数："<<endl;
        cin>>num;
        sum=sum+num;
    }
    cout<<"这"<<n<<"个数的和为："<<sum<<endl;

}

void Loop::test3() {
//求n！
    int n;
    cin>>n;
    int i=1,f=1;
    loop:
    f*=i;
    i++;
    if(i<=n){
        goto loop;
    }
    cout<<"factorial of "<<n<<"="<<f<<endl;
}

void Loop::test4() {
    int n;
    double square_root;
    cout<<"请输入若干整数（以0结束）"<<endl;
    for(cin>>n;n!=0;cin>>n){
        if(n<0) continue;
        square_root=sqrt((double) n);
        cout<<n<<"的平方根是"<<square_root<<endl;
    }
}

void Loop::test5() {

    //计算从键盘输入的一系列整数的和，要求输入以0结束
    int sum=0,n;
    cout<<"请输入若干整数（以0结束）:"<<endl;

    do{
        cin>>n;
//        cout<<"n为："<<n<<endl;
        sum=sum+n;
    }while (n!=0);
    cout<<"和为："<<sum<<endl;

}

void Loop::test6() {

    //从键盘接受字符，一直到输入字符y（Y）或n（N）为止
//    char n[]={};
    char c;
//    string s="";
    cout<<"请输入若干字符:"<<endl;
    do{
        cin>>c;
        cout<<"c为："<<c<<endl;
//        s=s.append(to_string(n));
    }while(c!='y' && c!='Y' && c!='n' && c!='N');
//    cout<<s<<endl;
}

void Loop::test7() {

    //判断键盘输入的一个整数是否为素数
    int n;
    bool isPrime=true;
    cout<<"输入一个整数："<<endl;
    cin>>n;
    if(n==0||n==1){
        isPrime=false;
    }else{
        for (int i = 2; i <n ; i++) {
//            cout<<i<<n<<endl;
            if((n%i)==0){
//                cout<<i<<n<<endl;
                isPrime=false;
                break;
            }
        }
    }
    if(isPrime){
        cout<<n<<"为素数"<<endl;
    }else{
        cout<<n<<"不为素数"<<endl;
    }

}

void Loop::test8() {
    int n,f1=1,f2=1;
    cin>>n;
    if(n==1||n==2){
       cout<<"第"<<n<<"个斐波那契数为1"<<endl;
    }else{
        for(int i=3;i<=n;i++){
            int tmp=f1+f2;//计算新的斐波那契数
            f1=f2;//记住前一个斐波那契数
            f2=tmp;//记住新的斐波那契数
        }
        cout<<"第"<<n<<"个斐波那契数为"<<f2<<endl;
    }
}

void Loop::test9() {

    const double EPS=1e-9;
    double a,x1,x2;
    cout<<"请输入一个数："<<endl;
    cin>>a;
    x2=a;
    do{
        x1=x2;
        x2=(2*x1+a/(x1*x1))/3;
    }while (fabs(x2-x1)>=EPS);
    cout<<a<<"的立方根是"<<x2<<endl;

}

void Loop::test10() {

    //输出小于n的所有素数
    int n,count=1;
    cout<<"请输入一个数："<<endl;
    cin>>n;
    if(n<=2){
        cout<<"输入错误。"<<endl;
    }
    cout<<2<<",";//输出第一个素数
    for (int i = 3; i <n ; i+=2) {//循环，分别判断3、5、7、是否为素数
        int j=2,k=sqrt((double)i);//取i的平方根
        while((j<=k) && i%j!=0){
            j++;
        }
        if(j>k){
            cout<<i<<",";
            count++;
            if(count%6==0){
                cout<<endl;
            }
        }
    }

}

void Loop::test11() {

    double x;
    int n;
    cin>>x>>n;
    double item=x,sum=1+x;
    for (int i = 2; i <n ; ++i) {
        item *=x/i;
        sum += item;
    }
    cout<<"x="<<x<<",n="<<n<<",sum="<<sum<<endl;

}





