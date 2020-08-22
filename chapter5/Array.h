//
// Created by zhangzhiqiang on 2020/1/16.
//

#ifndef PROGRAMEDESIGN_ARRAY_H
#define PROGRAMEDESIGN_ARRAY_H


#include "Enum.h"

struct TableItem{//名表的元素类型
    char name[10];//关键词
//    ......//其它信息
};

class Array {

public:
     int fib(int n);
     void display_month(Month m);
     void show_month(double d[]);
     int str_to_int (char c[]);
     int find_substr(char str[],char sub_str[]);
     void print_str();
     void print_matrix1();//矩阵转置
     void print_matrix2();//矩阵相乘
     void josephus(int N,int M);//约瑟夫问题
     void sel_sort(int x[],int n);
     void quick_sort(int x[],int first,int last);
     int split(int x[], int first, int last);
     static void bubble_sort(int x[],int n);
     int binary_search(char key[],TableItem t[],int num_of_items);
};


#endif //PROGRAMEDESIGN_ARRAY_H
