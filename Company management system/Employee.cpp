#include <iostream>
#include "Employee.h"

using namespace std;
    // Setters
    Employee::Employee(int i, string n, string ph, string g,float s, string wt):Person(i,n,ph,g){
        salary = s;
        working_time = wt;
    }
    void Employee::setSalary(float s){
        salary = s;
    }
    void Employee::setWorkingTime(string wt){
        working_time = wt;
    }
    // Getters
    float Employee::getSalary(){
        return salary;
    }
    string Employee::getWorkingTime(){
        return working_time;
    }
    void Employee::print_extra_info(){
        Person::print_extra_info();
        cout << "Salary : " << salary << endl;
        cout << "Working time : " << working_time << endl;
    }