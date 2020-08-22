//
// Created by zhangzhiqiang on 2020/1/28.
//

#include "Union.h"
#include <iostream>
using namespace std;

const int MAX_NUM_OF_FIGURES=100;
TaggedFigure figures[MAX_NUM_OF_FIGURES];

void Union::draw_line(Line line) {

}

void Union::draw_rectangle(Rectangle rectangle) {

}

void Union::draw_circle(Circle circle) {

}

void Union::draw() {
    int count;
    for (count = 0; count <MAX_NUM_OF_FIGURES ; ++count) {
        int shape;
        do{
            cout<<"请输入图形的种类（0：线段，1：矩形，2：圆，-1：结束）:"<<endl;
            cin>>shape;
        }while(shape<-1||shape>2);
        if(shape==-1){
            break;
        }else{
            switch (shape){
                case 0://线段
                    figures[count].shape=LINE;
                    cout<<"请输入线段的起点和终点坐标（x1,x2,y1,y2）：";
                    cin>>figures[count].figure.line.x1>>figures[count].figure.line.x2>>figures[count].figure.line.y1>>figures[count].figure.line.y2;
                    break;
                case 1://矩形
                    figures[count].shape=RECTANGLE;
                    cout<<"请输入矩形的左上角和右下角坐标（left,top,right,bottom）：";
                    cin>>figures[count].figure.rectangle.left>>figures[count].figure.rectangle.top>>figures[count].figure.rectangle.right>>figures[count].figure.rectangle.bottom;
                    break;
                case 2://圆形
                    figures[count].shape=CIRCLE;
                    cout<<"请输入圆的圆心坐标和半径（x,y,r）:";
                    cin>>figures[count].figure.circle.x>>figures[count].figure.circle.y>>figures[count].figure.circle.r;
                    break;
            }
        }
    }
    //输出所有图形
    for (int i = 0; i < count; ++i) {
        switch (figures[i].shape){
            case LINE:
                draw_line(figures[i].figure.line);
                break;
            case RECTANGLE:
                draw_rectangle(figures[i].figure.rectangle);
                break;
            case CIRCLE:
                draw_circle(figures[i].figure.circle);
                break;
        }
    }
}

