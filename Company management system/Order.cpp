#include <iostream>
#include <vector>
#include "Order.h"

using namespace std;
    Order::Order(){}
    Order::Order(string d, bool ip, Person p, vector <Prodact> pt){
        setId();
        data = d;
        is_paid = ip;
        person = p;
        prodacts = pt;
    }
    void Order::setId(){
        id = counterId++;
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
    int Order::getIdPerson(){
        return person.getId();
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