#include <iostream>
#include <string.h>
#include "Course.h"
    
using namespace std;

    Course::Course(){
        // nameCourse = "";
        Td = 0;
        exam = 0;
        coff = 0;
        credit = 0;
    }
    Course::Course(string nameCourse, float Td, float exam, float coff, float credit){
        this->nameCourse = nameCourse;
        this->Td = Td;
        this->exam = exam;
        this->coff = coff;
        this->credit = credit;
    }
    void Course::setName(string name){
        this->nameCourse = name;
    }
    void Course::setTd(float Td){
        this->Td = Td;
    }
    void Course::setExam(float exam){
        this->exam = exam;
    }
    void Course::setCoff(float coff){
        this->coff = coff;
    }
    void Course::setCredit(float credit){
        this->credit = credit;
    }
    string Course::getName(){
        return nameCourse;
    }
    float Course::getTd(){
        return Td;
    }
    float Course::getExam(){
        return exam;
    }
    float Course::getCoff(){
        return coff;
    }
    float Course::getCredit(){
        return credit;
    }
    float Course::getFinalCredit(){
        if(((Td + exam)/2) < 10)
            return 0;
        return credit;
    }
    float Course::getAvg(){
        return (Td + exam) / 2;
    }
    float Course::getFinalAvg(){
        return ((Td + exam) / 2) * coff;
    }
    void Course::printCourseInfo(){
        cout << "Course : " << nameCourse << endl;
        cout << "\tTd " << "\tExam\n";
        cout << "\t" << Td << "\t" << exam << endl;
        cout << "Avg : " << ((Td + exam) / 2) << endl;
        cout << "Coefficient : " << coff << endl;
        cout << "Credit : " << credit << endl;
    }
    void Course::printFailInfo(){
        cout << "Course : " << nameCourse << endl;
        cout << "Avg : " << ((Td + exam) / 2) << endl;
    }
