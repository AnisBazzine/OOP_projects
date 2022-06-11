#include "Client.h"

using namespace std;
    Client::Client(){
    }
    Client::Client(string n, string ph, string g,string e):Person(n,ph,g){
        email = e;
    }
    void Client::setEmail(string e){
        email = e;
    }
    string Client::getEmail(){
        return email;
    }
    void Client::print_extra_info(){
        Person::print_extra_info();
        cout << "Email : " <<  email << endl;
    }