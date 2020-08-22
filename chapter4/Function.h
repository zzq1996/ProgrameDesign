//
// Created by zhangzhiqiang on 2020/1/12.
//

#ifndef PROGRAMEDESIGN_FUNCTION_H
#define PROGRAMEDESIGN_FUNCTION_H


class Function {

public:
    int factorial(int n);
    double power(double x,int n);
    void display_message(double score);
    bool is_prime(int n);
    void print_prime(int n,int count);
    void show_prime();
    int fib(int n);
    int gcd(int x,int y);
    void hanoi(char x,char y,char z,int n);

};


#endif //PROGRAMEDESIGN_FUNCTION_H
