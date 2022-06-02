#include <iostream>
#include "Person.h"
using namespace std;
    // Setters
    Person::Person(){}
    Person::Person(int i, string n, string ph, string g){
        id = i;
        name = n;
        phone = ph;
        gender = g;
    }
    void Person::setId(int i){
        id = i;
    }
    void Person::setName(string n){
        name = n;
    }
    void Person::setPhone(int ph){
        phone = ph;
    }
    void Person::setGender(string g){
        gender = g;
    }
    void Person::print_extra_info(){
        cout << "Id : " << id << endl;
        cout << "Name : " << name << endl;
        cout << "Phone : " << phone << endl;
        cout << "Gender : " << gender << endl;
    }

    // Getters
    int Person::getId(){
        return id;
    }
    string Person::getName(){
        return name;
    }
    string Person::getPhone(){
        return phone;
    }
    string Person::getGender(){
        return gender;
    }