//
// Created by blackstone on 22.03.21.
//

#ifndef SNAKE2_MAP_H
#define SNAKE2_MAP_H
#include "Point.h"
#include "Snake.h"
#include <iostream>
class Map {
public:
    Map();
    void show_map();
    void food_check();
    void food_create();
    void add_player(Snake &snake);
    void move_snakes();
    void print_snakes();
    void clear_map();
    int get_map_widh();
    int get_map_heigh();
    Snake* get_player(int index);
private:
    const int widh=100;
    const int heihht=40;
    char **map;
    Snake _snakes[3];
    int player_count=0;
    Point food_cord=Point(10,10);
};


#endif //SNAKE2_MAP_H
