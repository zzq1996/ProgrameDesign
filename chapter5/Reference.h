//
// Created by zhangzhiqiang on 2020/2/6.
//

#ifndef PROGRAMEDESIGN_REFERENCE_H
#define PROGRAMEDESIGN_REFERENCE_H


class Reference {

public:
    void swap(int &x,int &y);
    void swap(int *&x,int *&y);
    void f(const int& x);
    int &max(int x[],int num);
};


#endif //PROGRAMEDESIGN_REFERENCE_H
