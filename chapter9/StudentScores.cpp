//
// Created by zhangzhiqiang on 2020/5/5.
//

#include "StudentScores.h"
#include <iomanip>//操纵符声明头文件

StudentScores::StudentScores() {
    initialized= false;
}

bool StudentScores::data_is_ok() const {
    return initialized;
}

istream &operator>>(istream &in, StudentScores &x) {
    if(&in==&cin){//从键盘输入时需要给出提示
        cout<<"请输入学号、姓名、选课数及各门课成绩（以学号'E'结束）：\n";
    }
    in>>setw(11)>>x.id;//读入学号，操纵符setw用于指定输入字符的最大个数
    if(in.eof()||x.id[0]=='E'){//判断结束标志
        x.initialized=false;
        return in;
    }
    in>>setw(9)>>x.name;//读入姓名
    in>>x.num_of_courses;//读入选课数
    if(x.num_of_courses>MAX_NUM_OF_COURSES){
        x.initialized= false;
        return in;
    }
    for(int i=0;i<x.num_of_courses;i++){//循环读入各门课成绩
        in>>x.scores[i];
    }
    x.initialized=true;
    return in;
}

ostream &operator << (ostream &out, const StudentScores &x) {
    out<<x.id<<' '<<x.name<<' '<<x.num_of_courses;
    for (int i = 0; i < x.num_of_courses; ++i) {
        out<<' '<<x.scores[i];
    }
    return out;
}

const int *StudentScores::getScores() const {
    return scores;
}

int StudentScores::getNumOfCourses() const {
    return num_of_courses;
}

void StudentScores::setNumOfCourses(int numOfCourses) {
    num_of_courses = numOfCourses;
}

const char *StudentScores::getId() const {
    return id;
}

const char *StudentScores::getName() const {
    return name;
}

bool StudentScores::isInitialized() const {
    return initialized;
}

void StudentScores::setInitialized(bool initialized) {
    StudentScores::initialized = initialized;
}

int StudentScores::average_score() const {
    int total=0;
    for (int i = 0; i < num_of_courses; ++i) {
        total+=scores[i];
    }
    return total/num_of_courses;
}
