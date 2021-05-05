//
// Created by blackstone on 22.03.21.
//

#ifndef SNAKE2_SNAKE_H
#define SNAKE2_SNAKE_H
#include <vector>
#include "Point.h"
class Snake {
public:
    Snake();
    Snake(char direction);
    void snake_move();
    void snake_add();
    std::vector <Point> get_cordinates();
    void set_cur_stat(char input);
    void set_map(int map_widh,int map_height);
private:
   std:: vector<Point> cordinates;
   std::vector<char>state;
   char cur_stat;
   int _map_widh;
   int _map_heiht;
};


#endif //SNAKE2_SNAKE_H
