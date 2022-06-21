#include <iostream>
#include "Course.h"
    
using namespace std;

    Course::Course(){
        nameCourse = "";
        Td = 0;
        exam = 0;
        coff = 0;
        credit = 0;
    }
    Course::Course(char * nameCourse, float Td, float exam, int coff, int credit){
        this->nameCourse = nameCourse;
        this->Td = Td;
        this->exam = exam;
        this->coff = coff;
        this->credit = credit;
    }
    void Course::setTd(float Td){
        this->Td = Td;
    }
    void Course::setExam(float exam){
        this->exam = exam;
    }
    void Course::setCoff(int coff){
        this->coff = coff;
    }
    void Course::setCredit(int credit){
        this->credit = credit;
    }
    float Course::getTd(){
        return Td;
    }
    float Course::getExam(){
        return exam;
    }
    int Course::getCoff(){
        return coff;
    }
    int Course::getCredit(){
        return credit;
    }
    int Course::getFinalCredit(){
        if(((Td + exam)/2) <= 10)
            return 0;
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
