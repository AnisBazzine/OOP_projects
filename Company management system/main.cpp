#include <iostream>
#include "Company.h"
#include "Employee.h"
#include "Client.h"
using namespace std;

void welcome();// Done
void choisees();// Done
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
    cout << "\n";
    cout << "******************************************************************************\n";
    cout << "* You can use this system as follows:                                        *\n";
    cout << "*\tAdd new client, prodact or order                                     *\n";
    cout << "*\tRemove client or employee, prodact or order                          *\n";
    cout << "*\tPrint information about client, employee, prodact or order           *\n";
    cout << "*\tPrint information about all clients, employees, prodact or orders    *\n";
    cout << "******************************************************************************\n";
}
void for_person(){
    cout << "\nPerson choise\n";
    cout << "\n***********\n";
    cout << "1. Add employee\n";
    cout << "2. Remove\n";
    cout << "3. Print\n";
    cout << "0. Exit\n";
    cout << "Your choise: ";
    cin >> choise;
// Person pers;
    float s;
    int id;
    string n, ph, g, wt;

        if(choise == 0){
            cout << "Bye\n";
            exit(0);
        }
        else if(choise == 1){
            cout << "Enter employee name: ";
            cin >> n;
            cout << "Enter employee phone: ";
            cin >> ph;
            cout << "Enter gender: ";
            cin >> g;
            cout << "Enter salary: ";
            cin >> s;
            cout << "Enter work time: ";
            cin >> wt;

            // Employee eap(n,ph,g,s,wt);
            // comp.add_Person(eap);
        }
        else if(choise == 2){
            cout << "Enter id: ";
            cin >> id;
            // comp.remove_Person(id);
        }
        else if(choise == 3){
            cout << "Enter person id: ";
            cin >> id;
            // comp.print_person_info(id);
        }
        else
            cout << "Wrong choise\n";
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
    cout << "\t*****************\n";
    cout << "\t1. Employee\n";// person is employee
    cout << "\t2. Prodact\n";
    cout << "\t3. Order\n";
    cout << "\t0. Exit\n";
    cout << "\t*****************\n";
    cout << "\tEnter choise: ";
}