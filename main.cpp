#include <iostream>
#include <unistd.h>
#include <thread>
#include <cstdlib>
#include "Map.h"
#include<stdio.h>
#include <termios.h>

char getch() {
    char buf = 0;
    struct termios old = {0};
    if (tcgetattr(0, &old) < 0)
        perror("tcsetattr()");
    old.c_lflag &= ~ICANON;
    old.c_lflag &= ~ECHO;
    old.c_cc[VMIN] = 1;
    old.c_cc[VTIME] = 0;
    if (tcsetattr(0, TCSANOW, &old) < 0)
        perror("tcsetattr ICANON");
    if (read(0, &buf, 1) < 0)
        perror ("read()");
    old.c_lflag |= ICANON;
    old.c_lflag |= ECHO;
    if (tcsetattr(0, TCSADRAIN, &old) < 0)
        perror ("tcsetattr ~ICANON");
    return (buf);
}
char getch_1() {
    char buf = 0;
    struct termios old = {0};
    if (tcgetattr(0, &old) < 0)
        perror("tcsetattr()");
    old.c_lflag &= ~ICANON;
    old.c_lflag &= ~ECHO;
    old.c_cc[VMIN] = 1;
    old.c_cc[VTIME] = 0;
    if (tcsetattr(0, TCSANOW, &old) < 0)
        perror("tcsetattr ICANON");
    if (read(0, &buf, 1) < 0)
        perror ("read()");
    old.c_lflag |= ICANON;
    old.c_lflag |= ECHO;
    if (tcsetattr(0, TCSADRAIN, &old) < 0)
        perror ("tcsetattr ~ICANON");
    return (buf);
}

void update(Map &tmp){
    int player_1,player_2;
    while(true){
        player_1=(tmp.get_player(0)->get_cordinates().size()-4)*10;
        player_2=(tmp.get_player(1)->get_cordinates().size()-4)*10;
        std::cout<<"Player -1 Sroce: "<<player_1<<"\t\t Player-2 Score : "<<player_2<<std::endl;
        tmp.clear_map();
        tmp.print_snakes();
        tmp.show_map();
        usleep(50000);
        system("clear");
    }
}
void snakes_movment(Map &tmp){
    while(true){
        tmp.move_snakes();
        usleep(50000);
    }
}
void input_player_1(Map &o){
    char tmp;
   // system("stty raw");
    while(true){
        //tmp=getch();
        tmp=getch();
        if(tmp=='w'||tmp=='s'||tmp=='d'||tmp=='a'){
            o.get_player(0)->set_cur_stat(tmp);

        }
        if(tmp=='8'){
            tmp='w';
            o.get_player(1)->set_cur_stat(tmp);

        }else if(tmp=='5'){
            tmp='s';
            o.get_player(1)->set_cur_stat(tmp);
        } else if(tmp=='4'){
            tmp='a';
            o.get_player(1)->set_cur_stat(tmp);
        }else if(tmp=='6'){
            tmp='d';
            o.get_player(1)->set_cur_stat(tmp);
        }
        tmp='0';
       // usleep(9000);


    }
}
void input_player_2(Map &o){
    char tmp;
    while(true){
        tmp=getch_1();
        if(tmp=='8'){
            tmp='w';
            o.get_player(1)->set_cur_stat(tmp);

        }else if(tmp=='5'){
            tmp='s';
            o.get_player(1)->set_cur_stat(tmp);
        } else if(tmp=='4'){
            tmp='a';
            o.get_player(1)->set_cur_stat(tmp);
        }else if(tmp=='6'){
            tmp='d';
            o.get_player(1)->set_cur_stat(tmp);
        }
        tmp='0';
       // usleep(9000);
    }
}



int main() {
    std::cout << "Hello, World!" << std::endl;
    Snake sn1;
    Snake sn2('w');
    Map o;
    sn1.set_map(o.get_map_widh(),o.get_map_heigh());
    sn2.set_map(o.get_map_widh(),o.get_map_heigh());
    int a;
    //char input;

    o.add_player(sn1);
    o.add_player(sn2);
    std::thread t1(update,std::ref(o));
    std::thread t2(snakes_movment,std::ref(o));
    std::thread t3(input_player_1,std::ref(o));
    //std::thread t4(input_player_2,std::ref(o));
    /*pthread_t pt1;
    pthread_create(&pt1,NULL,&update,);
     */
   // update(o);
    std::cout<<"this line after thread created"<<std::endl;
    t1.join();
    t2.join();
    t3.join();
    system("stty raw");
    o.show_map();



    /*
    while(true){

        input=getchar();
        std::cout<<"key was pressed"<<std::endl;
        aaa.set_cur_stat(input);


    }*/



    return 0;
}
