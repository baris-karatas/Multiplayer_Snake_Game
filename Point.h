//
// Created by blackstone on 22.03.21.
//

#ifndef SNAKE2_POINT_H
#define SNAKE2_POINT_H


class Point {
public:
    Point(int x,int y){
        cordinate_x=x;
        cordinate_y=y;
    }
    int get_x(){
        return cordinate_x;
    }
    int get_y(){
        return cordinate_y;
    }
    void set_cord(int x,int y){
        cordinate_x=x;
        cordinate_y=y;
    }
    void set_x(int x){
        cordinate_x=x;
    }
    void set_y(int y){
        cordinate_y=y;
    }
private:
    int cordinate_x;
    int cordinate_y;

};


#endif //SNAKE2_POINT_H
