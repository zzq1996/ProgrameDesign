//
// Created by zhangzhiqiang on 2020/1/11.
//

#include "Test3.h"
#include <iostream>
#include <iomanip>

using namespace std;

void Test3::test1() {

    double fahrenheit,degree;
    cout<<"请输入华氏度："<<endl;
    cin>>fahrenheit;
    degree=5*(fahrenheit-32)/9;
    cout<<fahrenheit<<"华氏度对应的摄氏度为："<<degree<<endl;

}

void Test3::test2() {
    int h1,m1;
    cout<<"输入时 分："<<endl;
    cin>>h1>>m1;
    if(h1<12){
        cout<<h1<<":"<<m1<<"am"<<endl;
    }else{
        cout<<h1-12<<":"<<m1<<"pm"<<endl;
    }

}

void Test3::test3() {

    char a='a';
    char z='z';
    for (int i = 0; i <=25 ; i++) {
        if(i==25){
            cout<<a;
        }else{
            cout<<a<<",";
        }
        a++;
    }
    cout<<a<<endl;//{
    for (int i = 0; i <=25 ; i++) {
        if(i==25){
            cout<<z;
        }else{
            cout<<z<<",";
        }
        z--;
    }
    cout<<z<<endl;//`


}

void Test3::test4() {

    int n,count=1;
    cout<<"输入一个正整数："<<endl;
    cin>>n;
    for (int i = 10; i <n*10 ; i=i*10) {
        int m=n/i;
        if(m>0){
            count++;
        }
    }
    cout<<n<<"是" <<count<<"位数"<<endl;

}

void Test3::test5() {

    int left=0,right=0;
    char c=' ';
    cout<<"输入一个算术表达式:"<<endl;
    while (c!='#') {
        cin >> c;
        if (c == '{') {
            left++;
        }
        if (c == '}') {
            right++;
        }
    }

    if(left==right){
        cout<<"配对"<<endl;
    }else if(left>right){
        cout<<"多左括号"<<endl;
    }else if(left<right){
        cout<<"多右括号"<<endl;
    }
}

void Test3::test6() {

    //输入一个字符串（以字符#结尾），对其中的'>='计数
    int count=0;
    char ch1='\0' ,ch2;
    cout<<"输入一串字符"<<endl;
    while(ch2!='#'){
        cin>>ch2;
        if(ch2=='=' && ch1=='>'){
            count++;
        }
        ch1=ch2;
    }
//    for(cin>>ch2;ch2!='#';cin>>ch2){
//        if(ch2=='=' && ch1=='>'){
//            count++;
//        }
//        ch1=ch2;
//    }
    cout<<">=个数："<<count<<endl;

}

void Test3::test7() {

    double weight,distance;
    cout<<"输入包裹重量和邮寄距离："<<endl;
    cin>>weight>>distance;
    if(weight<=0){
        cout<<"输入错误"<<endl;
    }else if(weight>0&&weight<=15){
        cout<<"收费5元"<<endl;
    }else if(weight>15&&weight<=30){
        cout<<"收费9元"<<endl;
    }else if(weight>30&&weight<=45){
        cout<<"收费12元"<<endl;
    }else if(weight>45&&weight<=60){
        if(distance/1000<0){
            cout<<"收费14元"<<endl;
        }else{
            cout<<"收费"<<14+(distance/1000)*1<<"元"<<endl;
        }
    }else if(weight>60){
        if(distance/1000<0){
            cout<<"收费15元"<<endl;
        }else{
            cout<<"收费"<<15+(distance/1000)*2<<"元"<<endl;
        }
    }

}

void Test3::test8() {
    double sum=0;
    for (int i = 1; (double)1/(2*i-1)>=1e-8 ; i++) {
        int n=1;
        sum=sum+(double)1/(2*i-1)*n;
        n=n*-1;
    }
    cout<<"pi="<<setprecision(100)<<4*sum<<endl;

}

void Test3::test9() {
//输出三位数的水仙花数
//    for (int i = 0; i <10 ; ++i) {
//        for (int j = 0; j <10 ; ++j) {
//            for (int k = 0; k <10 ; ++k) {
//                if(i*i*i+j*j*j+k*k*k==(i*100+j*10+k) && ((i*100+j*10+k)/100)>=1){
//                    cout<<(i*100+j*10+k)<<" ";
//                }
//            }
//        }
//    }

    for (int i = 100; i < 1000; ++i) {
        int a=i/100;
        int b=i%100/10;
        int c=i%10;
        if(a*a*a+b*b*b+c*c*c==i){
            cout<<a<<" "<<b<<" "<<c<<" "<<i<<endl;
        }
    }

}

void Test3::test10() {

    int a,b,i=2,count=1;
    cout<<"输入a b的值"<<endl;
    cin>>a>>b;
    do{
        if(a%i==0 && b%i==0){
            count=i;
        }
        i++;
    }while (i<=a||i<=b);
    cout<<a<<"和"<<b<<"的最大公约数是："<<count<<endl;

}

void Test3::test11() {

    int n,w=1;
    cout<<"输入商品价格："<<endl;
    cin>>n;
    for (int i = 0; i <= n ; ++i) {
        for (int j = 0; j <= n/2 ; ++j) {
            for (int k = 0; k <= n/5; ++k) {
                if(i+2*j+5*k==n){
                    cout<<"第"<<w<<"种支付方式:"<<"一元："<<i<<",二元："<<j<<",五元："<<k<<endl;
                    w++;
                }
            }

        }
    }

}

void Test3::test12() {

    int n,reversedInteger = 0, remainder, originalInteger;
    cout<<"输入一个整数:"<<endl;
    cin>>n;
    originalInteger = n;

    // 翻转
    while( n!=0 )
    {
        remainder = n%10;
        reversedInteger = reversedInteger*10 + remainder;
        n = n/10;
        cout<<n<<" "<<remainder<<" "<<reversedInteger<<endl;
    }

    // 判断
    if (originalInteger == reversedInteger){
        cout<<originalInteger<<"是回文数"<<endl;
    }else{
        cout<<originalInteger<<"不是回文数"<<endl;
    }
}

void Test3::test13() {

    for(int i=1;i<10;++i){
        for (int j = 1; j <=i ; ++j) {
            cout<<i<<"*"<<j<<"="<<i*j<<" ";
        }
        cout<<endl;
    }

}






