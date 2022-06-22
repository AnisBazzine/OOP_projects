#include <iostream>
#include "Gpa.h"

using namespace std;

    Gpa::Gpa(){    }
    Gpa::Gpa(vector <Unite> unites, float totalUnites){
        this->unites = unites;
        this->totUnites = totalUnites;
    }
    void Gpa::setUnites(vector <Unite> unites){
        this->unites = unites;
    }
    void Gpa::setTotUnites(float totUnites){
        this->totUnites = totUnites;
    }
    vector <Unite> Gpa::getUnites(){
        return unites;
    }
    float Gpa::getTotUnites(){
        return totUnites;
    }
    float Gpa::getCoff(){
        float totalCoff = 0;
        for(int i = 0; i < totUnites; i++)
            totalCoff += unites[i].getTotalCoff();
        return totalCoff;
    }
    void Gpa::print(){
        float gpa = 0;
        float totAvgUnite  = 0;
        int countFailCourse = 0;
        for(int i = 0; i < totUnites; i++)
            totAvgUnite += unites[i].getAvgUnite() * unites[i].getTotalCoff();
        gpa =  totAvgUnite / getCoff();
        if(gpa >= 10)
            cout << "Gpa : " << gpa << endl;
        else{
            for(int i = 0; i < totUnites; i++){
                vector <Course> tempCourse = unites[i].getCourses();
                for(int k = 0; k < unites[i].getTotalCourses(); k++){
                    if(tempCourse[k].getAvg() < 10){
                        cout << countFailCourse++ << " ";
                        tempCourse[k].printFailInfo();
                    }
                }
            }
        cout << "Total Fail Course : " << countFailCourse << endl;
        }
        // print the gpa
        // print the course fail 
        // print total credit
    }