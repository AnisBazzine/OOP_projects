#ifndef ORDER_h
#define ORDER_h

#include <iostream>
#include <vector>
#include "Prodact.h"
#include "Client.h"
using namespace std;

class Order{
    private:
        int idOrder;
        static int counterIdOrder;
        string data;
        bool is_paid;
        Client client;
        vector <Prodact> prodacts;
    public:
        Order();
        Order(string d, bool ip, Client c, vector <Prodact> pt);
        
        void setId();
        void setData(string d);
        void setIsPaid(bool ip);
        void setClient(Client c);
        void setProdacts(vector <Prodact> pt);

        int getId();
        string getData();
        bool getIsPaid();
        int getIdClient();
        Client getClient();
        vector <Prodact> getProdacts(); 
        int getTotalProdacts();
};
#endif // ORDER_h