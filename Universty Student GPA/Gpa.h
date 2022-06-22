#include <iostream>
#include "Unite.h"

using namespace std;

class Gpa{
private:
    vector <Unite> unites;
    float totUnites;
public:
    Gpa();
    Gpa(vector <Unite>, float);
    
    void setUnites(vector <Unite>);
    void setTotUnites(float);
    void addUnite(Unite);
    vector <Unite> getUnites();
    float getTotUnites();
    float getCoff();
    void print();
};