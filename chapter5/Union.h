//
// Created by zhangzhiqiang on 2020/1/28.
//

#ifndef PROGRAMEDESIGN_UNION_H
#define PROGRAMEDESIGN_UNION_H

struct Line{
    double x1,y1,x2,y2;
};

struct Rectangle{
    double left,top,right,bottom;
};

struct Circle{
    double x,y,r;
};

union Figure{
    Line line;
    Rectangle rectangle;
    Circle circle;
};

enum FigureShape{
    LINE,RECTANGLE,CIRCLE
};

//变体记录类型（识别是何图形）
struct TaggedFigure{
    FigureShape shape;
    Figure figure;
};

class Union {

public:
     void draw_line(Line line);
     void draw_rectangle(Rectangle rectangle);
     void draw_circle(Circle circle);
     void draw();
};


#endif //PROGRAMEDESIGN_UNION_H
