#include <iostream>
#include <vector>
#include "Person.h"
#include "Prodact.h"

using namespace std;

class Order{
    private:
        int id;
        static int counterId;
        string data;
        bool is_paid;
        Person person;
        vector <Prodact> prodacts;
    public:
        Order();
        Order(string d, bool ip, Person p, vector <Prodact> pt);
        void setId();
        void setData(string d);
        void setIsPaid(bool ip);
        void setPerson(Person p);
        void setProdacts(vector <Prodact> pt);
        int getId();
        string getData();
        bool getIsPaid();
        int getIdPerson();
        Person getPerson();
        vector <Prodact> getProdacts();
};