#include<iostream>
#include<ctime>
#include<conio.h>
#include"class.h"
#include"function.h"

using namespace std;

int main(){

	Setup();
    while(!player1.get_lose()){
        Draw();
        Input();
        Move();
        sleep(1);
    }
    cout << "out of the game\n";
    system("pause");
    return 0;
}
