#include <iostream>
#include <vector>
#include "Order.h"

using namespace std;
    Order::Order(){}
    Order::Order(int i, string d, bool ip, Person p, vector <Prodact> pt){
        id = i;
        data = d;
        is_paid = ip;
        person = p;
        prodacts = pt;
    }
    void Order::setId(int i){
        id = i;
    }
    void Order::setData(string d){
        data = d;
    }
    void Order::setIsPaid(bool ip){
        is_paid = ip;
    }
    void Order::setPerson(Person p){
        person = p;
    }
    void Order::setProdacts(vector <Prodact> pt){
        prodacts = pt;
    }
    int Order::getId(){
        return id;
    }
    string Order::getData(){
        return data;
    }
    bool Order::getIsPaid(){
        return is_paid;
    }
    Person Order::getPerson(){
        return person;
    }
    vector <Prodact> Order::getProdacts(){
        return prodacts;
    }