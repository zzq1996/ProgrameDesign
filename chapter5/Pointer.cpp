//
// Created by zhangzhiqiang on 2020/1/30.
//

#include "Pointer.h"
#include "Array.h"
#include <iostream>
#include <cmath>

using namespace std;

void Pointer::operator2() {

    A a;
    a.i=10;//定义一个int型变量i
    int *p;//定义一个指向int型的指针p
    p=&a.i;//指针p指向i
    cout<<"p(i的内存地址)："<<p<<"\n&p（指针p的内存地址）："<<&p
        <<"\nsizeof(p)（指针p所占的内存大小）："<< sizeof(p)<<"\n*p（指针p所指的变量的值）："<<*p
        <<"\nsizeof(*p)（指针p所指的变量所占内存大小）："<< sizeof(*p)<<endl<<endl;

    A *st_p;//定义一个指向结构A的指针st_p
    st_p=&a;//指针st_p指向结构体a
    st_p->i=0;//或，(*st_p).i=0;
    cout<<"st_p(a的内存地址)："<<st_p<<"\n&st_p（指针st_p的内存地址）："<<&st_p
        <<"\nsizeof(st_p)（指针st_p所占的内存大小）："<< sizeof(st_p)<<"\n*st_p.i（指针st_p所指的结构a的成员i的值）："<<(*st_p).i
        <<"\nsizeof(*st_p)（指针st_p所指的结构体a所占内存大小）："<< sizeof(*st_p)<<endl;

}

void Pointer::operator3() {

    //一个指针减去/加上一个整型值
    int a[10]={0,1,2,3,4,5,6,7,8,9};
    int *p1=&a[0];//指针p指向数组a的第一个元素
    p1++;//指向数组a的第二个元素
    cout<<"*p:"<<*p1<<endl<<endl;

    //两个同类型的指针相减
    double d1=9.7,d2=4.3;
    double *q1=&d1,*q2=&d2;
    double offset=q1-q2;//offset的值为q1和q2所指向的内存范围内能存储的double型变量的最大个数，即offset=(q1的值-q2的值)/sizeof(double)
    cout<<"&q1:"<<&q1<<"\t&q2:"<<&q2<<"\toffset:"<<offset<<endl<<endl;

    //两个同类型的指针比较
    int *p2=&a[7];
    int *p3=0;//或int *p3=NULL
    cout<<"p1:"<<p1<<"\tp2:"<<p2<<"\tp1>p2:"<<(p1>p2)<<endl;
    cout<<"(bool)p2:"<<(bool)p2<<"\t(bool)p3:"<<(bool)p3<<endl<<endl;

}

void Pointer::operator4() {

    char str[]="ABCD";//字符数组定义并初始化时可以不用声明长度，以\0为结束符
    char *p=&str[0];//定义一个字符指针p指向字符数组str的第一个元素
    cout<<"输出第一个元素的地址："<<(void *)p<<"\t 输出第一个元素的值："<<*p<<endl;
    cout<<"直接输出p："<<p;


}


void Pointer::operator6(A *p) {//p为指向结构类型A的指针
    p->i=10;//间接访问成员i
    p->d=45.3;//间接访问成员d
}

void Pointer::operator5(int *a, int num) {//等价于void Pointer::operator5(int a[], int num)
    for (int i = 0; i < num; ++i) {
        *a=i;
        a++;
    }

}

void Pointer::operator7(int *p1, int *p2) {
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}

int Pointer::calculate_roots(double a, double b, double c, double *root1, double *root2) {
    if(a==0){
        return -1;
    }
    double t=b*b-4*a*c;
    if(t<0){
        return 0;
    }else if(t==0){
        *root1=*root2=-b/(2*a);
        return 1;
    }else {
        t=sqrt(t);
        *root1=(-b+t)/(2*a);
        *root2=(-b-t)/(2*a);
        return 2;
    }
}

void Pointer::show_roots() {

    double a,b,c,r1,r2;
    cout<<"输入一元二次方程的系数（a，b，c）:"<<endl;
    cin>>a>>b>>c;
    switch (calculate_roots(a,b,c,&r1,&r2)){
        case -1:
            cout<<"该方程不是一元二次方程\n";
            break;
        case 0:
            cout<<"该方程没有实数根\n";
            break;
        case 1:
            cout<<"该方程有两个等根:"<<r1<<endl;
            break;
        case 2:
            cout<<"该方程有两个不等根："<<r1<<"和"<<r2<<endl;
            break;
    }

}

void Pointer::operator8(int *p, const int *P1, const int *const P2) {
    int a1=1;
    const int A=1;
    *p=10;
//    *P1=10;//ERROR
//    P2=&A;//ERROR
//    *P2=1;//ERROR
}

void Pointer::operator9() {
    int *p;//int类型的指针p
    p=new int;//产生一个动态的整型变量，p指向该变量
    *p=1;//只能通过指针变量访问该动态的整型变量
//    p=new double;//ERROR 该new操作结果为double *

    //创建一个元素个数为n的一维动态数组
    int n;
    p=new int[n];//创建一个由n个int型元素构成的动态一维数组，返回第一个元素的地址
    p[0]=0;//只能通过指针变量访问数组元素

    //创建一个m行20列的二维动态数组
    int (*q)[20];//创建一个指向20个int型元素构成的一维数组的指针，等价于：typedef int A[20]; A *q;
    int m;
    q=new int[m][20];//创建一个n行20列的二维动态数组，返回第一行的地址，等价于：q = new A[n];
    q[0][1]=0;//只能通过指针q访问二维数组的第0行第1列元素

    //创建一个c行d列（每一维大小都可变）的多维动态数组（通过一维数组实现）
    int *r;//创建int型指针r
    int c,d;
    r=new int[c*d];//创建一个由c*d个int型元素构成的一维动态数组，返回第一个元素的地址
    *(r+2*d+3)=0;//访问r指向的隐含的二维数组的第2行第3列元素

    int *p1,*p2,*r1;//定义三个类型指针
    typedef int A[20];
    A *q1;// 等价于int (*q1)[20];//q1为指向20个int型元素的构成的一维数组的指针
    int m1,n1;
    p1=(int *)malloc(sizeof(int));//创建一个int型动态变量
    p2=(int *)malloc(sizeof(int)*n);//创建一个由n个int元素构成的一维动态数组变量
    q1=(A *)malloc(sizeof(int)*n*20);//创建一个n行20列的动态二维数组
    r1=(int *)malloc(sizeof(int)*m*n);//创建一个隐含的m行n列的二维动态数组


    delete (p);//撤销p所指的动态变量

}

void Pointer::operator10() {
    const int NUM=5;
    int length=10,n=0,count=0;
    int *p;
    p=new int [length];//定义一个动态数组，长度为5
    cout<<"输入一组数，以-1结束\n";
    cin>>n;//输入的第一个数
    while(n!=-1){
        p[count]=n;
        count++;//输入个数加一
        if(count>=length){
            length=length+NUM;
            int *bigger=new int[length];//创建较大的动态数组变量
            for (int i = 0; i < count; ++i) {//将小数组的数据转移到大数组
                bigger[i]=p[i];
            }
            delete []p;//将小动态数组删除
            p=bigger;//指针p指向大数组
        }
        cin>>n;//输入的下一个数
    }
    Array::bubble_sort(p,count);
    for (int j = 0; j <count ; ++j) {
        cout<<p[j]<<"\t";
    }
    delete [] p;//删除大数组

}

//从表尾插入数据
Node *Pointer::input() {
    Node *head=NULL,*tail;
    int x;
    //输入第一个数
    cin>>x;
    while (x!=-1){
        //生成新的节点
        Node *p=new Node;
        p->content=x;
        p->next=NULL;
        //若为空表，加入第一个节点
        if(head==NULL){
            //表头、表尾指针都指向这个节点
            head=tail=p;
        }else{
            //新节点加在表尾
            tail->next=p;
            //表尾指针指向新节点
            tail=p;
        }
        //输入下一个数
        cin>>x;
    }
    return head;
}

//采用选择排序
void Pointer::sort(Node *h) {
    //链表中没有或只有一个结点
    if(h==NULL || h->next==NULL){
        return;
    }else{
        //从链表的头开始逐步缩小链表的范围
        for(Node *p1=h;p1->next!=NULL;p1=p1->next){
            //p_min指向最小的结点，初始化为p1
            Node *p_min=p1;
            //从p1的下一个开始与p_min比较
            for(Node *p2=p1->next;p2!=NULL;p2=p2->next){
                //保持p_min指向值最小的结点
                if(p2->content<p_min->content){
                    p_min=p2;
                }
            }
            if(p_min!=p1){
                //交换p_min与p1指向的结点值，使得p1指向的结点值最小
                int temp=p1->content;
                p1->content=p_min->content;
                p_min->content=temp;
            }
        }
    }

}

//输出数据
void Pointer::output(Node *h) {
    for(Node *p=h;p!=NULL;p=p->next){
        cout<<p->content<<',';
    }
    cout<<endl;
}

//删除数据
void Pointer::remove(Node *h) {
    while(h!=NULL){
        Node *p=h;
        h=h->next;
        delete p;
    }

}

//使用链表解决约瑟夫问题
void Pointer::josephus() {
    int m,//用于存储要报的数
    n,//用于存储小孩的个数
    num_of_children_remained;//用于存储圈子中剩下的小孩个数
    cout<<"请输入小孩的个数和要报的数\n";
    cin>>n>>m;

    //构建圈子
    Node2 *first,*last;//first和last分别指向第一个和最后一个小孩
    first=last=new Node2; //生成第一个结点
    first->no=0;//第一个小孩的编号为0
    for(int i=1;i<n;i++){//循环构建其他小孩结点
        Node2 *p=new Node2;//生成一个小孩结点
        p->no=i;//新的小孩结点的编号为i
        last->next=p;//最后一个小孩的next指向新生成的小孩结点
        last=p;//把新生成的小孩结点设为最后一个结点
    }
    last->next=first;//把最后一个小孩的下一个小孩设为第一个小孩

    //开始报数
    num_of_children_remained=n;//报数前圈中小孩的个数
    Node2 *previous=last;//previous指向开始报数的前一个小孩
    while(num_of_children_remained>1){
        for(int count=1;count<m;count++){//循环m-1次
            previous=previous->next;
        }//循环结束时，previous指向将要离开圈子的小孩的前一个小孩
        Node2 *p=previous->next;//p指向将要离圈的小孩的结点
        previous->next=p->next;//小孩离开圈子
        delete p;//释放离圈小孩结点的空间
        num_of_children_remained--;//圈中小孩数减1
    }

    //输出胜利者编号
    cout<<"The winner is No."<<previous->no<<"\n";
    delete previous;//释放胜利者结点的空间

}

void Pointer::reverse(char *str) {
    char *p1=str;//指向字符串的头
    char *p2=str+strlen(str)-1;//指向字符串的尾
    for(;p1<p2;p1++,p2--){
        char temp=*p1;
        *p1=*p2;
        *p2=temp;
    }
}

void Pointer::swap(int **x, int **y) {
    //行参定义为二级指针，实参传入指针类型实参的地址

    int *t;
    t=*x;
    *x=*y;
    *y=t;
}




