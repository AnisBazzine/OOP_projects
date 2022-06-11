#include <iostream>
#include "Company.h"
#include "Employee.h"
#include "Client.h"
using namespace std;

void welcome();// Done
void choisees();
void for_person();
void for_prodact();
void for_order();
Company comp;
int choise;
int main(){
    welcome();
    do{
        choisees();
        cin >> choise;
        switch (choise){
            case 0:
                cout << "Bye\n";
                exit(0);
            case 1:
                for_person();
                break;
            case 2:
                for_prodact();
                break;
            case 3:
                for_order();
                break;
            default:
                cout << "Wrong choise\n";
                break;
        }
    }while(choise != 0);
    return 0;
}
void welcome(){
    cout << "****************************************\n";
    cout << "* Welcome to Company management system *\n";
    cout << "****************************************\n";
}
void for_person(){
    cout << "Person choise\n";
    // fix list show here!!
    // 1 add
    // 2 remove 
    // 3 print
    // 0 exit
    Client c;
    Employee emp;
    float s;
    int id;
    string n, ph, g, e, wt;
    switch(choise){
        case 0:
            cout << "Bye\n";
            exit(0);
        case 1:
            cout << "1. Client\n";
            cout << "2. Employee\n";
            cin >> choise;
            if(choise == 1){// client choise
                cout << "Enter person name: ";
                cin >> n;
                cout << "Enter person phone: ";
                cin >> ph;
                cout << "Enter gender: ";
                cin >> g;
                cout << "Enter email: ";
                cin >> e;
                c = Client(n, ph, g, e);
                comp.add_Person(c);
            }
            else if(choise == 2){// employee choise
                cout << "Enter person name: ";
                cin >> n;
                cout << "Enter person phone: ";
                cin >> ph;
                cout << "Enter gender: ";
                cin >> g;
                cout << "Enter salary: ";
                cin >> s;
                cout << "Enter work time: ";
                cin >> wt;
                emp = Employee(n, ph, g, s, wt);
                comp.add_Person(emp);
            }
            break;
        case 2:
            cout << "Enter person id: ";
            cin >> id;
            comp.remove_Person(id);
            break;
        case 3:
            cout << "Enter person id: ";
            cin >> id;
            comp.print_person_info(id);
            break;
        default:
            cout << "Wrong choise\n";
    }
}
void for_prodact(){
    cout << "Prodact choise\n";
    // 1 add
    // 2 remove 
    // 3 print
    // 0 exit
}
void for_order(){
    cout << "Order choise\n";
    // 1 add
    // 2 remove 
    // 3 print 
    // 0 exit
}
void choisees(){
    cout << "\n*****************\n";
    cout << "\t1. Person\n";
    cout << "\t2. Prodact\n";
    cout << "\t3. Order\n";
    cout << "\t0. Exit\n";
    cout << "\n*****************\n";
    cout << "Enter choise: ";
}