#include <termios.h>
#include<iostream>
#include<ctime>
#include<conio.h>
#include "SnakeGame.cpp"
#include"class.h"

using namespace std;

enum Diration{Top = 1, Down, Right, Left};
Map map1; Snake snake1; Player player1;
void Shift_Right(int arr[],int size){
    for(int k = size -2; k >= 0; k--)
        arr[k + 1] = arr[k];
}
void Setup(){
    map1.set(50, 25);
    map1.Genrat_fruit();
    snake1.set(map1.get_width()/2, map1.get_height()/2, 0);
    player1.set(0, false);
}
void Draw(){
    system("clear");
    for(int i = 0; i < map1.get_height(); i++){
        for(int j = 0; j < map1.get_width(); j++){
            if(i == 0 or i == (map1.get_height() - 1)) cout << "#";
            else if(j == 0 or j == (map1.get_width()- 1)) cout << "#";
            else if (i == snake1.get_y() and j == snake1.get_x()) cout << "O";
            else if (i == map1.get_fruitY() and j == map1.get_fruitX()) cout << "*";
            else {
                bool printed = false;
                for(int z = 0; z < snake1.get_t(); z++){
                    if(snake1.tail_x[z] == j and snake1.tail_y[z] == i) {
                        cout << "o";
                        printed = true;
                        break;
                    }
                }
                if(!printed) cout << " ";
            }
        }
        cout << endl;
    }
    cout << "Player Score: " << player1.get_Score()  << endl;
}
void Input(){
    if(kbhit()){
        char c = getche();
        switch (c){
            case 'w': snake1.set_Dir(Top); break;
            case 's': snake1.set_Dir(Down); break;
            case 'd': snake1.set_Dir(Right); break;
            case 'a': snake1.set_Dir(Left); break;
            case 'x': exit(0);
        }
    }
}
void Move(){

    Shift_Right(snake1.tail_x, 30);
    Shift_Right(snake1.tail_y, 30);
    snake1.tail_x[0] = snake1.get_x();
    snake1.tail_y[0] = snake1.get_y();

    switch(snake1.get_Dir()){
        case Top: snake1.set_y(snake1.get_y()- 1); break;
        case Down: snake1.set_y(snake1.get_y()+ 1); break;
        case Left: snake1.set_x(snake1.get_x()- 1); break;
        case Right: snake1.set_x(snake1.get_x()+ 1); break;
    }
    if(snake1.get_x() <= 0 || snake1.get_x() >= map1.get_width() ||
        snake1.get_y() <= 0 || snake1.get_y() >= map1.get_height())
        player1.setLose(true);
    if(snake1.get_x() == map1.get_fruitX() && snake1.get_y() == map1.get_fruitY()){
        map1.Genrat_fruit();
        player1.set_Score(player1.get_Score() + 1);
        snake1.set_t(snake1.get_t() + 1);
    }
}
//=========================function of class
    void Map::set(int w, int h){
        this->width = w;
        this->height = h;
    }
    void Map::Genrat_fruit(){
        srand(time(NULL));
        fruitX = rand() % (width - 2) + 1;
        fruitY = rand() % (height - 2) + 1;
    }
    int Map::get_width(){return width;}
    int Map::get_height(){return height;}
    int Map::get_fruitY(){return fruitY;}
    int Map::get_fruitX(){return fruitX;}

void Snake::set(int x, int y,int t){
        this->x = x;
        this->y = y;
        this->tail = t;
    }
    void Snake::set_Dir(Diration d){dir = d;}
    void Snake::set_x(int x){x = x;}
    void Snake::set_y(int y){y = y;}
    void Snake::set_t(int t){t = t;}
    // void set_tx(int tx){tail_x = tx;}
    // void set_ty(int ty){tail_y = ty;}
    int Snake::get_x(){return x;}
    int Snake::get_y(){return y;}
    int Snake::get_t(){return tail;}
    // int get_tx(){return tail_x;}
    // int get_ty(){return tail_y;}
    Diration Snake::get_Dir(){return dir;}

    void Player::set(int score, bool l){
        this->score = score;
        this->lose = l;
    }
    void Player::set_Score(int s){score = s;}
    void Player::setLose(bool l){this->lose = l;}
    int Player::get_Score(){return score;}
    bool Player::get_lose(){return lose;}
