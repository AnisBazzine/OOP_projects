#include "Prodact.h"

using namespace std;
    int Prodact::counterIdProdact = 1;
    Prodact::Prodact(){}
    Prodact::Prodact(string n, float p){
        setId();
        name = n;
        price = p;
    }
    void Prodact::setId(){
        idProdact = counterIdProdact++;
    }
    void Prodact::setName(string n){
        name = n;
    }
    void Prodact::setPrice(float p){
        price = p;
    }
    int Prodact::getId(){
        return idProdact;
    }
    string Prodact::getName(){
        return name;
    }
    float Prodact::getPrice(){
        return price;
    }