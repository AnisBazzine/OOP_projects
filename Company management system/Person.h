#include<iostream>

using namespace std;

class Person{
    private:
        static int counterId;
        int id;
        string name;
        string phone;
        string gender;
    public:
        Person();
        Person(string n, string p, string g);
        void setId();
        void setName(string n);
        void setPhone(int ph);
        void setGender(string g);
        void print_extra_info();

        int getId();
        string getName();
        string getPhone();
        string getGender();
};