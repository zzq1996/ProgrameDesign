//
// Created by zhangzhiqiang on 2020/1/16.
//

#include "Enum.h"
#include <iostream>

Day Enum::function1(int n) {
    Day d;
    if(n<0||n>6){
        std::cout<<""<<std::endl;
        return (Day)-1;
    }else{
        switch(n){
            case 0:d=SUN;
                break;
            case 1:d=MON;
                break;
            case 2:d=TUE;
                break;
            case 3:d=WED;
                break;
            case 4:d=THU;
                break;
            case 5:d=FRI;
                break;
            case 6:d=SAT;
                break;
        }
        return d;
    }
}

void Enum::function2(Day day) {
    switch(day) {
        case SUN:
            std::cout << "SUN" << std::endl;
            break;
        case MON:
            std::cout << "MON:" << std::endl;
            break;
        case TUE:
            std::cout << "TUE" << std::endl;
            break;
        case WED:
            std::cout << "WED" << std::endl;
            break;
        case THU:
            std::cout << "THU" << std::endl;
            break;
        case FRI:
            std::cout << "FRI" << std::endl;
            break;
        case SAT:
            std::cout << "SAT" << std::endl;
            break;
    }
}
