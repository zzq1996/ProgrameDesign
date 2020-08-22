//
// Created by zhangzhiqiang on 2020/2/14.
//

#ifndef PROGRAMEDESIGN_SECTION4_H
#define PROGRAMEDESIGN_SECTION4_H


class Section4 {
private:
    int a,b,c;
    const float f;
    int &y;
public:
    Section4();
    Section4(int a1,int b1);
    Section4(int a1,int b1,int c1);
    void print_member();
};


#endif //PROGRAMEDESIGN_SECTION4_H
