#include <iostream>
#include "Unite.h"

using namespace std;

    Unite::Unite(){    }
    Unite::Unite(vector <Course> courses, int totalCourses){
        this->courses = courses;
        this->totalCourses = totalCourses;

    }
    void Unite::setTotalCourses(int totalCourses){
        this->totalCourses = totalCourses;
    }
    void Unite::setCourses(vector <Course> courses){
        this->courses = courses;
    }
    float Unite::getTotalCourses(){
        return totalCourses;
    }
    vector <Course> Unite::getCourses(){
        return courses;
    }
    float Unite::getTotalCoff(){
        float totalCoff = 0;
        for(int i = 0; i < totalCourses; i++)
            totalCoff += courses[i].getCoff();
        return totalCoff;
    }
    float Unite::getAvgUnite(){
        float totUnite = 0;
        for(int i = 0; i < totalCourses; i++)
            totUnite += courses[i].getFinalAvg();
        
        return totUnite / getTotalCoff();
    }
    float Unite::getCridets(){
        float totalCridets = 0;
        for(int i = 0; i < totalCourses; i++)
            totalCridets += courses[i].getFinalCredit();
        return totalCridets;
    }