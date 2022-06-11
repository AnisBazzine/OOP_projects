#ifndef CLIENT_H
#define CLIENT_H
#include <iostream>
#include "Person.h"

using namespace std;

class Client : public Person{
    private:
        string email;
    public:
        Client();
        Client(string n, string ph, string g,string e);
        void setEmail(string e);
        string getEmail();
        void print_extra_info();
};
#endif // CLIENT_H