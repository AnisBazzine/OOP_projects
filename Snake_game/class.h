#include<iostream>
#include<ctime>
#include<conio.h>

using namespace std;
class Map{
protected:
    int width, height, fruitX, fruitY;
public:
    Map(){  /*empty constructor*/  }
    void set(int w, int h);
    void Genrat_fruit();
    int get_width();
    int get_height();
    int get_fruitY();
    int get_fruitX();
};

class Snake{
protected:
    int x, y, tail;
    Diration dir;
public:
    int tail_x[30], tail_y[30];
    Snake(){/*empty constructor*/}
    void set(int x, int y,int t);
    void set_Dir(Diration d);
    void set_x(int x);
    void set_y(int y);
    void set_t(int t);
    // void set_tx(int tx){tail_x = tx;}
    // void set_ty(int ty){tail_y = ty;}
    int get_x();
    int get_y();
    int get_t();
    // int get_tx(){return tail_x;}
    // int get_ty(){return tail_y;}
    Diration get_Dir();
};

class Player{
protected:
    int score;
    bool lose;
public:
    Player(){  /*empty constructor*/  }
    void set(int score, bool l);
    void set_Score(int s);
    void setLose(bool l);
    int get_Score();
    bool get_lose();
};