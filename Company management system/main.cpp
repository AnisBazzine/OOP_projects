#include <iostream>
#include "Company.h"
#include "Employee.h"
#include "Client.h"
using namespace std;
void free();
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
    cout << "\t****************************************\n";
    cout << "\t* Welcome to Company management system *\n";
    cout << "\t****************************************\n";
    // cout << "\n";
    cout << "\t***********************************************************************\n";
    cout << "\t* You can use this system as follows:                                 *\n";
    cout << "\t* Add new client, prodact or order                                     *\n";
    cout << "\t* Remove client or employee, prodact or order                          *\n";
    cout << "\t* Print information about client, employee, prodact or order           *\n";
    cout << "\t* Print information about all clients, employees, prodact or orders    *\n";
    cout << "\t***********************************************************************\n";
}
void for_person(){ // Done
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
            free();
            cout << "Enter employee name: ";
            getline(cin,n);
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

            { // test my code then delete this block
                cout << "Name: " << n << endl;
                cerr << "Phone: " << ph << endl;
                cerr << "Gender: " << g << endl;
                cerr << "Salary: " << s << endl;
                cout << "Work time: " << wt << endl;
            }
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
void for_prodact(){// Done
    // 1 add
    // 2 remove 
    // 3 print
    // 0 exit
    cout << "\nProdact choise\n";
    cout << "\n***********\n";
    cout << "1. Add\n";
    cout << "2. Remove\n";
    cout << "3. Print\n";
    cout << "4. Total\n";
    cout << "0. Exit\n";
    cout << "Your choise: ";
    cin >> choise;
    if(choise == 0){
        cout << "Bye\n";
        exit(0);
    }
    else if(choise == 1){
        string n;
        float p;
        free();
        cout << "Enter prodact name: ";
        getline(cin,n);
        cout << "Enter prodact price: ";
        cin >> p;

        // Prodact pr(n,p);
        // comp.add_Prodact(pr);
        {
            cout << "Name: " << n << endl;
            cerr << "Price: " << p << endl;
        }
    }
    else if(choise == 2){
        int id;
        cout << "Enter id: ";
        cin >> id;
        // comp.remove_Prodact(id);
    }
    else if(choise == 3){
        int id;
        cout << "Enter prodact id: ";
        cin >> id;
        // comp.print_prodact_details(id);
    }
    else if(choise == 4){
        // comp.print_tot_prodacts();
    }
    else
        cout << "Wrong choise\n";
}

void for_order(){ // Need to work
    // 1 add
    // 2 remove 
    // 3 print 
    // 4 total
    // 0 exit
    cout << "\nOrder choise\n";
    cout << "\n***********\n";
    cout << "1. Add\n";
    cout << "2. Remove\n";
    cout << "3. Print\n";
    cout << "4. Total\n";
    cout << "0. Exit\n";
    cout << "Your choise: ";
    cin >> choise;
    if(choise == 0){
        cout << "Bye\n";
        exit(0);
    }
    else if(choise == 1){
        // add order iformation
        // add person of order
        // ask how many prodacts & add prodact of order
        string d, nc, ph, g, e, np;
        float p;
        bool isp;
        vector <Prodact> pr;
        int tot_prodacts;
        // Order
        free();
        cout << "Enter date: ";
        getline(cin,d);
        cout << "Is paid? (1/0): "; // cout << "Is paid? (True/False): ";
        cin >> isp;
        // Client
        free();
        cout << "Enter client name: ";
        getline(cin,nc);
        free();
        cout << "Enter client phone: ";
        cin >> ph;
        cout << "Enter client gender: ";
        cin >> g;
        free();
        cout << "Enter Client email: ";
        getline(cin,e);
        // Client clt(nc,ph,g,e);
        // Prodact
        
        cout << "Total prodact: ";
        cin >> tot_prodacts;
        for(int i = 0; i < tot_prodacts; i++){
            cout << "Enter prodact name: ";
            getline(cin, np);
            free();
            cout << "Enter prodact price: ";
            cin >> p;

            free();
            // Prodact prd(np,p);
            // pr.push_back(prd);
            // cout << "Prodact " << i + 1 << " added, ID: " << pr[i].getId() << "\n";
            
        }
        {// test my code then delete this block
            cout << "Date: " << d << endl;
            cout << "Is paid: " << isp << endl;
            cout << "Client name: " << nc << endl;
            cout << "Client phone: " << ph << endl;
            cout << "Client gender: " << g << endl;
            cout << "Client email: " << e << endl;
            cout << "Total prodact enter is: " << tot_prodacts << endl;
        }
        // Order ord(d,isp,clt,pr);
        // comp.add_Order(ord);
    }
    else if(choise == 2){
        int id;
        cout << "Enter id: ";
        cin >> id;
        // comp.remove_Order(id);
    }
    else if(choise == 3){
        int id;
        cout << "Enter order id: ";
        cin >> id;
        // comp.print_order_details(id);
    }
    else if(choise == 4){
        // comp.print_tot_orders();
    }
    else
        cout << "Wrong choise\n";
}
void choisees(){
    cout << "*****************\n";
    cout << "1. Employee\n";// person is employee
    cout << "2. Prodact\n";
    cout << "3. Order\n";
    cout << "0. Exit\n";
    cout << "*****************\n";
    cout << "Enter choise: ";
}
void free(){
	cin.ignore(50,'\n');
}