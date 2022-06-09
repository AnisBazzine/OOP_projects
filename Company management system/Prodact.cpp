#include <iostream>
#include "Prodact.h"

using namespace std;
    Prodact::Prodact(){}
    Prodact::Prodact(string n, float p){
        setId();
        name = n;
        price = p;
    }
    void Prodact::setId(){
        id = counterId++;
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