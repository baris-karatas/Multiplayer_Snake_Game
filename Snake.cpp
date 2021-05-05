//
// Created by blackstone on 22.03.21.
//

#include "Snake.h"
Snake::Snake() {
    for(int  i=0;i<4;i++){
        Point cord(25+i,20);
        cordinates.push_back(cord);
        state.push_back('a');
    }
    cur_stat='a';
}
Snake::Snake(char direction) {
    cur_stat=direction;
    switch (cur_stat) {
        case 'a':
            for(int  i=0;i<4;i++){
                Point cord(25+i,20);
                cordinates.push_back(cord);
                state.push_back('a');
            }
            break;
        case 's':for(int  i=0;i<4;i++){
                Point cord(25,20-i);
                cordinates.push_back(cord);
                state.push_back('s');
            }
            break;
        case 'd':for(int  i=0;i<4;i++){
                Point cord(25-i,20);
                cordinates.push_back(cord);
                state.push_back('d');
            }
            break;
        case 'w':for(int  i=0;i<4;i++){
                Point cord(25,20+i);
                cordinates.push_back(cord);
                state.push_back('w');
            }
            break;
        default:
            break;

    }
}
void Snake::snake_move() {

    for(int i=state.size()-1;i>=0;i--){
        if(i!=0){
            state[i]=state[i-1];
        }else{
            state.at(i)=cur_stat;
        }
    }

    for(int i=0;i<cordinates.size();i++){
        switch (state.at(i)) {
            case 'w' :cordinates.at(i).set_cord(cordinates.at(i).get_x(),cordinates.at(i).get_y()-1);
                break;
            case  's':cordinates.at(i).set_cord(cordinates.at(i).get_x(),cordinates.at(i).get_y()+1);
            break;
            case 'a':cordinates.at(i).set_cord(cordinates.at(i).get_x()-1,cordinates.at(i).get_y());
            break;
            case 'd':cordinates.at(i).set_cord(cordinates.at(i).get_x()+1,cordinates.at(i).get_y());
            break;

        }
        if(cordinates.at(i).get_x()==0){
            cordinates.at(i).set_x(_map_widh-2);
        }else if(cordinates.at(i).get_x()==_map_widh-1){
            cordinates.at(i).set_x(1);
        }else if(cordinates.at(i).get_y()==0){
            cordinates.at(i).set_y(_map_heiht-2);
        }else if(cordinates.at(i).get_y()==_map_heiht-1){
            cordinates.at(i).set_y(1);
        }

    }

}
std::vector<Point> Snake::get_cordinates() {
    return cordinates;
}
void Snake::set_cur_stat(char input) {
    cur_stat=input;
}
void Snake::set_map(int map_widh, int map_height) {
    _map_heiht=map_height;
    _map_widh=map_widh;
}
void Snake::snake_add() {
    Point cord(0,0);
    if(state.at(state.size()-1)=='w'){
        cord.set_x(cordinates.at(cordinates.size()-1).get_x());
        cord.set_y(cordinates.at(cordinates.size()-1).get_y()+1);
        state.push_back('w');
    }else if(state.at(state.size()-1)=='a'){
        cord.set_x(cordinates.at(cordinates.size()-1).get_x()+1);
        cord.set_y(cordinates.at(cordinates.size()-1).get_y());
        state.push_back('a');
    }else if(state.at(state.size()-1)=='d'){
        cord.set_x(cordinates.at(cordinates.size()-1).get_x()-1);
        cord.set_y(cordinates.at(cordinates.size()-1).get_y());
        state.push_back('d');
    }else if(state.at(state.size()-1)=='s'){
        cord.set_x(cordinates.at(cordinates.size()-1).get_x());
        cord.set_y(cordinates.at(cordinates.size()-1).get_y()-1);
        state.push_back('s');
    }
    cordinates.push_back(cord);
}

