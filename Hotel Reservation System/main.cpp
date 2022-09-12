#include <iostream>
#include <string>
#include "Hotel.h"
using namespace std;
    // when Check in choise then print rooms->at(idcounter).printInfo() in Hotel.cpp line 175
int main(){
    Hotel hotel;
    hotel.mainMenu();
    cout << "Hotel Reservation System worek !\n" << endl;
    return 0;
}

// #include <iostream>
// #include <vector>

// using namespace std;

// class Number{
//   int nam;
//   string className;
// public:
//     Number(){}
//     Number(string name){
//       className = name;
//     }
//     void setNumber(int n){
//       nam = n;
//     }
//     int getNumber(){
//       return nam;
//     }
// };

// int main() {

//     vector <Number> numbers(7);
//     int n = numbers.size();
//     numbers.at(0).setNumber(1);
//     numbers.at(1).setNumber(2);
//     numbers.at(2).setNumber(3);
//     numbers.at(3).setNumber(4);
//     numbers.at(4).setNumber(5);
//     cout << "size of number : " << n << endl;
//     for(size_t i = 0; i < n; i++)
//         cout << "number : " << numbers.at(i).getNumber() << "\n";
//     cout << endl;
//     return 0;
// }