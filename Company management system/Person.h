#ifndef PERSON_H
#define PERSON_H
#include <iostream>

using namespace std;
class Person{
    private:
        static int counterIdPerson;
        int idPerson;
        string name;
        string phone;
        string gender;
    public:
        Person();
        Person(string n, string ph, string g);
        void setId();
        void setName(string n);
        void setPhone(string ph);
        void setGender(string g);
        int getId();
        string getName();
        string getPhone();
        string getGender();
        virtual void print_extra_info();
};
#endif // PERSON_H