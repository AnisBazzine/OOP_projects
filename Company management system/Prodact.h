#include <iostream>

using namespace std;

class Prodact{
    private:
        int id;
        string name;
        float price;
    public:
        Prodact();
        Prodact(int i, string n, float p);
        void setId(int i);
        void setName(string n);
        void setPrice(float p);
        int getId();
        string getName();
        float getPrice();
};