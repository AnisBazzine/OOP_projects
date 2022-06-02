#include<iostream>

using namespace std;

class Person{
    private:
        int id;
        string name;
        string phone;
        string gender;
    public:
        Person();
        Person(int i, string n, string p, string g);
        void setId(int i);
        void setName(string n);
        void setPhone(int ph);
        void setGender(string g);
        void print_extra_info();

        int getId();
        string getName();
        string getPhone();
        string getGender();
};