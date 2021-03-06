#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include "Person.h"

using namespace std;

class Employee : public Person{
private:
    float salary;
    string working_time;
public:
    Employee();
    Employee(string n, string ph, string g,float s, string wt);
    void setSalary(float s);
    void setWorkingTime(string wt);
    float getSalary();
    string getWorkingTime();
    void print_extra_info();
};
#endif // EMPLOYEE_H