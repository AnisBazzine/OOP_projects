#include <iostream>
#include <string.h>
#include "Gpa.h"
using namespace std;
/*
first ask 
    Total unite you have
    Ask in the unite about total course
    name course
    credit, coff, TD point, exam point 
    for every course then calclute 
    if the gpa less 10 
        give you the modle you need to prepare
        the real credit 
    if >= 10 the credit equal 30  
-----------------------------------------------------
1 aks for how many unite do you have 
2 for single unite ask how many courses 
3 for single course ask about :
        Course name 
        Exam point 
        Td point if not then enter exam point
        Credit 
        Cofffinet 
4 if get 10 or more print  the student gpa
    Else
        Print gpa, cridet and  fail courses with their gpa
*/
Gpa gpa;
int totUnite = 0, courseInUnite = 0, choise;
string courseName;
int credit  = 0, coff = 0;
float TdPoint = 0, examPoint = 0;
void welcomeSecrean();
void data_ask();
void print_list();
int main(){
    
    welcomeSecrean();
    do{
        cout << "1. add your points\n";
        cout << "2. print\n";
        cout << "0. exit\n";
        cout << "Enter your choise : ";
        cin >> choise;
        if(choise == 0){
            cout << "Bye\n";
            exit(0);
        }
        else if(choise == 1){
            data_ask();
        }
        else if(choise == 2){
            print_list();
        }
    }while(choise != 0);
    return 0;
}
void welcomeSecrean(){
    cout << "Welcome to your Universty Student GPA\n";
    cout << "Calculating your university average based on Algerian universities\n";
    cout << "======================================\n";
}
void data_ask(){
    cout << "Notes that if you don't have TD in this course,\njust enter exam point.\n";
    cout << "How many unite in your gpa : ";
    cin >> totUnite;
    gpa.setTotUnites(totUnite);
    vector <Unite> vectorUnite;
    for(int i = 0; i < totUnite; i++){
        cout << "Course in unite " << i + 1 << " : ";
        cin >> courseInUnite;
        vector <Course> vectorCourse; 
        for(int j = 0; j < courseInUnite; j++){
            cout << "course name ";
            cin >> courseName;
            cout << "credit ";
            cin >> credit;
            cout << "coff ";
            cin >> coff;
            cout << "TdPoint ";
            cin >> TdPoint;
            cout << "examPoint ";
            cin >> examPoint;
            Course vc(courseName,TdPoint,examPoint,coff,credit);
            vectorCourse.push_back(vc);
        }
        
        Unite vu(vectorCourse,courseInUnite);
        vectorUnite.push_back(vu);
    }
    gpa.setUnites(vectorUnite);
    for(int i = 0; i < gpa.getTotUnites(); i++){
        for(int j = 0; j < gpa.getUnites()[i].getTotalCourses(); j++){
            gpa.getUnites()[i].getCourses()[j].printFailInfo();
        }
    }
}
void print_list(){
    cerr << "1. Print result\n";
    cerr << "0. Exit\n";
    cerr << "Enter your choise : ";
    cin >> choise;
    if(choise == 0){
        cout << "bye\n";
        exit(0);
    }
    else if(choise == 1){
        gpa.print();
    }
}