#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>
using namespace std;

class Prodact{
    private:
        static int counterIdProdact;
        int idProdact;
        string name;
        float price;
    public:
        Prodact();
        Prodact(string n, float p);
        void setId();
        void setName(string n);
        void setPrice(float p);
        int getId();
        string getName();
        float getPrice();
};
#endif // PRODUCT_H