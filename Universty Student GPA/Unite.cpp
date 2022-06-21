#include <iostream>
#include "Unite.h"

using namespace std;

    Unite::Unite(){

    }
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

    int Unite::getTotalCourses(){
        return totalCourses;
    }
    vector <Course> Unite::getCourses(){
        return courses;
    }
    int Unite::getTotalCoff(){
        int totalCoff = 0;
        for(int i = 0; i < totalCourses; i++)
            totalCoff += courses[i].getCoff();
        
        return totalCoff;
    }
    float Unite::getAvgUnite(){
        float avgUnite = 0;
        for(int i = 0; i < totalCourses; i++)
            avgUnite += courses[i].getFinalAvg();
        
        return avgUnite / getTotalCoff();
    }