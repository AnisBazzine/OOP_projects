#include <iostream>
#include "Unite.h"

using namespace std;

class Gpa{
private:
    vector <Unite> unites;
    float totUnites;
public:
    Gpa();
    Gpa(vector <Unite> unites, int totalUnites);
    
    void setUnites(vector <Unite> unites);
    void setTotUnites(float totUnites);

    vector <Unite> getUnites();
    float getTotUnites();

    void print();
};