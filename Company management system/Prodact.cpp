#include <iostream>
#include "Prodact.h"

using namespace std;
    Prodact::Prodact(){}
    Prodact::Prodact(int i, string n, float p){
        id = i;
        name = n;
        price = p;
    }
    void Prodact::setId(int i){
        id = i;
    }
    void Prodact::setName(string n){
        name = n;
    }
    void Prodact::setPrice(float p){
        price = p;
    }
    int Prodact::getId(){
        return id;
    }
    string Prodact::getName(){
        return name;
    }
    float Prodact::getPrice(){
        return price;
    }