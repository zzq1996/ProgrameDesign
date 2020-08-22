//
// Created by zhangzhiqiang on 2020/5/5.
//

#ifndef PROGRAMEDESIGN_STUDENTSCORES_H
#define PROGRAMEDESIGN_STUDENTSCORES_H

#include <iostream>
using namespace std;

const int MAX_NUM_OF_COURSES=30;
const int MAX_ID_LEN=10;
const int MAX_NAME_LEN=8;

class StudentScores {

private:
    int scores[MAX_NUM_OF_COURSES],num_of_courses;
    char id[MAX_ID_LEN+1],name[MAX_NAME_LEN+1];
    bool initialized;//表示学生成绩数据是否被成功读入

public:
    StudentScores();
    bool data_is_ok()const;
    int average_score()const;

    const int *getScores() const;

    int getNumOfCourses() const;

    void setNumOfCourses(int numOfCourses);

    const char *getId() const;

    const char *getName() const;

    bool isInitialized() const;

    void setInitialized(bool initialized);

    friend istream &operator >>(istream &in,StudentScores &x);
    friend ostream &operator <<(ostream &out,const StudentScores &x);
};


#endif //PROGRAMEDESIGN_STUDENTSCORES_H
