//
// Created by blackstone on 22.03.21.
//

#include "Map.h"
Map::Map() {
    map=new char*[heihht];
    for(int i=0;i<heihht;i++){
        map[i]=new char[widh];
    }
    for(int i=0;i<heihht;i++){
        for(int j=0;j<widh;j++){
            if(i==0||i==heihht-1){
                map[i][j]='#';
            }else if(j==0||j==widh-1){
                map[i][j]='#';
            }else{
                map[i][j]=' ';
            }

        }
    }
}
void Map::show_map(){
    food_check();
    for(int i=0;i<heihht;i++){
        for(int j=0;j<widh;j++){
            if(j==widh-1){
                std::cout<<map[i][j]<<std::endl;
            }else{
                std::cout<<map[i][j]<<" ";
            }
        }

    }
    std::cout<<"*********************************************MAdE BY BLACKSTONE.INC******************************************\n\n";


}
void::Map::add_player(Snake &snake){
    _snakes[player_count]=snake;
    player_count++;
}
void::Map::move_snakes(){
    for(int i=0;i<player_count;i++){
        _snakes[i].snake_move();
    }
}
void Map::clear_map() {
    free(map);
    map=new char*[heihht];
    for(int i=0;i<heihht;i++){
        map[i]=new char[widh];
    }
    for(int i=0;i<heihht;i++){
        for(int j=0;j<widh;j++){
            if(i==0||i==heihht-1){
                map[i][j]='#';
            }else if(j==0||j==widh-1){
                map[i][j]='#';
            }else{
                map[i][j]=' ';
            }

        }
    }
}

void Map::print_snakes() {
    for(int i=0;i<player_count;i++){
        for(int j=0;j<_snakes[i].get_cordinates().size();j++){
            map[_snakes[i].get_cordinates().at(j).get_y()][_snakes[i].get_cordinates().at(j).get_x()]='*';
        }
    }
    map[food_cord.get_y()][food_cord.get_x()]='%';
}
int Map::get_map_heigh() {
    return heihht;
}
int Map::get_map_widh() {
    return widh;
}
Snake* Map::get_player(int index) {
    return &_snakes[index];
}

void Map::food_check() {
    for(int i=0;i<player_count;i++){
            if(_snakes[i].get_cordinates().at(0).get_x()==food_cord.get_x()&&_snakes[i].get_cordinates().at(0).get_y()==food_cord.get_y()){
                _snakes[i].snake_add();
                food_create();
            }
    }
}
void Map::food_create() {
    food_cord.set_y(rand() % heihht);
    food_cord.set_x(rand()%widh);
}













