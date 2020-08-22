
#include <iostream>//插入在标准库中定义的输入/输出所需的声明
#include <iomanip>
#include <fstream>
using namespace std;//C++标准库中的程序实体是在命名空间std中定义的

#include "chapter10/Exception.h"

int main() {
    Exception exception;
    try {
        exception.f();
    }catch (int){
        cout<<"请重新运行本程序！ \n";
    }

    return 0;
}