#include "Person.h"

using namespace std;
    int Person::counterIdPerson = 1;
    Person::Person(){}
    Person::Person(string n, string ph, string g){
        setId();
        name = n;
        phone = ph;
        gender = g;
    }
    void Person::setId(){    
        idPerson = counterIdPerson++;
    }
    void Person::setName(string n){
        name = n;
    }
    void Person::setPhone(string ph){
        phone = ph;
    }
    void Person::setGender(string g){
        gender = g;
    }
    void Person::print_extra_info(){    }

    // Getters
    int Person::getId(){
        return idPerson;
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