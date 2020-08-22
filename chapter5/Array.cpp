//
// Created by zhangzhiqiang on 2020/1/16.
//

#include "Array.h"
#include <iostream>

using namespace std;

int Array::fib(int n) {
    int a[n];
    a[0]=a[1]=1;
    for(int i=2;i<n;++i){
        a[i]=a[i-2]+a[i-1];
    }
    return a[n-1];
}

void Array::display_month(Month m) {
    switch(m){
        case JAN:cout<<"January";
            break;
        case FEB:cout<<"February";
            break;
        case MAR:cout<<"March";
            break;
        case APR:cout<<"April";
            break;
        case MAY:cout<<"May";
            break;
        case JUN:cout<<"June";
            break;
        case JUL:cout<<"July";
            break;
        case AUG:cout<<"August";
            break;
        case SEP:cout<<"September";
            break;
        case OCT:cout<<"October";
            break;
        case NOV:cout<<"November";
            break;
        case DEC:cout<<"December";
            break;
    }
    cout<<endl;
}

void Array::show_month(double *d) {
    Month i,min,max;
    max=min=JAN;
    for(i=FEB;i<=DEC;i=Month(i+1)){
        if(d[i]>d[max]){
            max=i;
        }else if( d[i]<d[min]){
           min=i;
        }
    }
    cout<<"最大湿度的月份是：";
    display_month(max);
    cout<<"最小湿度的月份是：";
    display_month(min);

}

int Array::str_to_int(char *c) {
    int n=0;
    for(int i=0;c[i]!='\0';i++){
        n=n*10+(c[i]-'0');//由于数组c中存储的是各位数字对应的ASCII码，把它们减去数字字符'0'（编码）可得到它们的数值
    }
    return n;
}

int Array::find_substr(char *str, char *sub_str) {
    int len,sub_len;
    for ( len = 0; str[len]!='\0' ; ++len);//计算主串长度
    for ( sub_len = 0; sub_str[sub_len]!='\0' ; ++sub_len);//计算子串长度
    cout<<"len:"<<len<<",sub_len:"<<sub_len<<endl;
    for (int i = 0; i <=len-sub_len ; ++i) {
        int j=0;
        while (j<sub_len && sub_str[j]==str[i+j]){
            j++;
        }
        if(j==sub_len){
            return i;
        }
    }
    return -1;
}

void Array::print_str() {
    char c[100];
    int len;
    cout<<"输入一串字符:"<<endl;
    cin>>c;
    for(len=0;c[len]!='\0';len++);
    for(int i=0,j=len-1;i<j;i++,j--){
        char temp;
        temp=c[i];
        c[i]=c[j];
        c[j]=temp;
    }
    cout<<c<<endl;

}

void Array::print_matrix1() {
    const int N=3;
    int a[N][N];
    int i,j;
    cout<<"请输入"<<N<<"x"<<N<<"矩阵：\n";
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin>>a[i][j];
        }
    }
    for (i = 0; i < N; ++i) {
        for (j = i+1; j <N ; ++j) {
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    cout<<"转置后为：\n";
    for (i = 0; i < N ; ++i) {
        for (j = 0; j < N; ++j) {
            cout<<a[i][j]<<"⊔";
        }
        cout<<endl;
    }
}

void Array::print_matrix2() {
    const int M=2,N=3,T=4;
    int a[M][N],b[N][T],c[M][T];
    int i,j,k;

    //输入矩阵A的值
    cout<<"请输入矩阵A（"<<M<<"x"<<N<<"）：\n";
    for (i = 0; i < M; ++i) {
        for(j=0;j<N;j++){
            cin>>a[i][j];
        }
    }

    //输入矩阵B的值
    cout<<"请输入矩阵B（"<<N<<"x"<<T<<"）：\n";
    for (i = 0; i < N; ++i) {
        for(j=0;j<T;j++){
            cin>>b[i][j];
        }
    }

    //计算矩阵C的值
    for(i=0;i<M;i++){
        for(j=0;j<T;j++){
            c[i][j]=0;
            for(k=0;k<N;k++){
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }

    //输出矩阵c的值
    cout<<"矩阵C（"<<M<<"x"<<T<<"）为：\n";
    for (i = 0; i < M; ++i) {
        for(j=0;j<T;j++){
            cout<<c[i][j]<<"⊔";
        }
        cout<<endl;
    }
}

//用数组实现
void Array::josephus(int N, int M) {
    //N个小孩，报到M离开

    //将该数组看作循环数组，即数组的最后一个元素in_circle(N-1)下一个元素是in_circle(0)
    bool in_circle[N];
    //index表示要报数的小孩的下标，初始值为N-1
    int num_of_children_remained,index;

    //初始化数组in_circle
    for (int i = 0; i <N ; ++i) {
        in_circle[i]=true;
    }

    //开始报数
    index=N-1;//从编号为0的小孩开始报数，index为前一个小孩的下标
    num_of_children_remained = N;//报数前圈子中小孩的数量
    while(num_of_children_remained>1){
        int count=0;
        while(count<M){//对成功的报数进行计数
            index=(index+1)%N;//计算要报数的小孩的编号
            if(in_circle[index]){
                count++;//如果编号为index的小孩在圈子里，则该报数为成功的报数
            }
        }
        in_circle[index]=false;//小孩离开圈子
        num_of_children_remained--;//圈中小孩数减1
    }

    //找到最后一个小孩
    for(index=0;index<N;index++){
        if(in_circle[index]){
            break;
        }
    }

    cout<<"The winner is No."<<index<<".\n";


}

//选择排序
void Array::sel_sort(int x[],int n) {

    for (; n>1 ; n--) {//基于数的个数进行循环，每次减少一个数
        int i_max=0;//假设第0个元素最大
        for (int i = 1; i < n; ++i) {//循环找前n个数中的最大元素
            if(x[i]>x[i_max]){
                i_max=i;//修改i_max的值，使其一直为最大元素的下标
            }
        }
        //交换x[i_max]和x[n-1]的值
        int temp=x[i_max];
        x[i_max]=x[n-1];
        x[n-1]=temp;
    }

}

//快速排序
//对数组元素在first和last之间（包括first和last）的元素进行排序
void Array::quick_sort(int x[], int first, int last) {
    if(first<last){
        int split_point;
        split_point=split(x,first,last);
        quick_sort(x,first,split_point-1);
        quick_sort(x,split_point+1,last);
    }

}

//split函数把数组x中的下标在first和last之间的元素加工（交换位置）成三分：[first,split_point-1],split_point,[split_point+1,last]
// 使得第一部分的元素小于x[split_point],第三部分的元素大于等于x[split_point]
int Array::split(int x[], int first, int last) {
    //取x[first]的值作为pivot，split_point初始为first
    int split_point,pivot;
    pivot=x[first];
    split_point=first;
    //从first+1的位置开始，每个元素（位置由unknown指示）逐个与pivot比较
    for(int unknown=first+1;unknown<=last;unknown++){
        //当元素小于pivot时，把该元素与split_point+1位置上的元素（它大于或等于pivot，或者就是正在比较的那个元素）交换位置，
        // 并把split_point加1，以保持split_point位置之前的元素（除x[first]外）小于pivot
        if(x[unknown]<pivot){
            split_point++;
            //交换x[split_point]和x[unknown]的值
            int t=x[split_point];
            x[split_point]=x[unknown];
            x[unknown]=t;
        }
    }
    //交换x[first]和x[split_point]的值，数组x划分完毕
    x[first]=x[split_point];
    x[split_point]=pivot;
    return split_point;
}

int Array::binary_search(char key[], TableItem t[], int num_of_items) {
    int index,first,last;
    first=0;
    last=num_of_items;
    while(first<=last){
        index=(first+last)/2;
        int r=strcmp(key,t[index].name);
        if(r==0){
            return index;
        }else if(r>0){
            first=index+1;
        }else{
            last=index-1;
        }
    }
    return -1;
}

void Array::bubble_sort(int x[], int n) {
    bool exchange;
    while (n>1){
        exchange=false;
        for (int i = 0; i <n-1 ; ++i) {
            if(x[i]>x[i+1]){
                int temp=x[i+1];
                x[i+1]=x[i];
                x[i]=temp;
                exchange=true;
            }
        }
        if(!exchange){
            break;
        }
        n--;
    }
}





