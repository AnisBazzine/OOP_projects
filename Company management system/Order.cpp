#include "Order.h"

using namespace std;

    int Order::counterIdOrder = 1;
    Order::Order(){}
    Order::Order(string d, bool ip, Client c, vector <Prodact> pt){
        setId();
        data = d;
        is_paid = ip;
        client = c;
        prodacts = pt;
    }
    void Order::setId(){
        idOrder = counterIdOrder++;
    }
    void Order::setData(string d){
        data = d;
    }
    void Order::setIsPaid(bool ip){
        is_paid = ip;
    }
    void Order::setClient(Client c){
        client = c;
    }
    void Order::setProdacts(vector <Prodact> pt){
        prodacts = pt;
    }
    int Order::getIdClient(){
        return client.getId();
    }
    int Order::getId(){
        return idOrder;
    }
    string Order::getData(){
        return data;
    }
    bool Order::getIsPaid(){
        return is_paid;
    }
    Client Order::getClient(){
        return client;
    }
    vector <Prodact> Order::getProdacts(){
        return prodacts;
    }
    int Order::getTotalProdacts(){
        return prodacts.size();
    }