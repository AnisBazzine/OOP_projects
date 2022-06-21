#include <iostream>
#include "Gpa.h"

using namespace std;

    Gpa::Gpa(){    }
    Gpa::Gpa(vector <Unite> unites, int totalUnites){
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
    void Gpa::print(){
        float gpa = 0;
        float totAvgUnite  = 0;
        int countFailcourse = 0;
        for(int i = 0; i < totUnites; i++)
            totAvgUnite += unites[i].getAvgUnite();
        gpa =  totAvgUnite / totAvgUnite;
        if(gpa >= 10)
            cout << "Gpa : " << gpa << endl;
        else{
            for(int i = 0; i < totUnites; i++){
                vector <Course> tempCourse = unites[i].getCourses();
                for(int k = 0; k < unites[i].getTotalCourses(); k++){
                    if(tempCourse[k].getFinalAvg() < 10){
                        countFailcourse++;
                        cout << countFailcourse << " ";
                        tempCourse[k].printFailInfo();
                    }
                }
            }
        cout << "Total Fail Course : " << countFailcourse << endl;
        }
        // print the gpa
        // print the course fail 
        // print total credit
    }