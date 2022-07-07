#include <iostream>
#include <string.h>
#include <limits>
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
/*
I think it's a great overall program but it's missing some user experience touches:
    1- one example for the people that don't know how to use it || Done 
    2- shorten the time of insertion (it takes a lot of time to insert the grades) || Done
    3- make some validation: any number or character can inserted || Done
*/
Gpa gpa;
int totUnite = 0, courseInUnite = 0, choise;
string courseName;
int credit  = 0, coff = 0;
float TdPoint = 0, examPoint = 0;
// make valdation function for the inputs
// Need to test it
auto validations(float input){
    bool validation = false;
    while(!validation){
        if(cin.fail()){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input unite, please try again\n";
            cin >> input;
        }
        else
            validation = true;    
    }
    return input;
}
void Guide(); 
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
        choise = validations(choise);
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
    Guide();
}
void Guide(){
    cout << "How to use the programme:\n";
    cout << "Course name * Credit * coefficient * TD * Exam\n";
    cout << "    Math_1       5        2         14.5   15\n";
}
void data_ask(){
    bool validation = false;
    cout << "Notes that if you don't have TD in this course,\njust enter exam point.\n";
    cout << "How many unite in your gpa : ";
    cin >> totUnite;
    totUnite = validations(totUnite);
    gpa.setTotUnites(totUnite);
    vector <Unite> vectorUnite;
    for(int i = 0; i < totUnite; i++){
        cout << "Course in unite " << i + 1 << " : ";
        cin >> courseInUnite;
        courseInUnite = validations(courseInUnite);
        vector <Course> vectorCourse; 
        for(int j = 0; j < courseInUnite; j++){
            cout << "Course name * Credit * Coff * TD * Exam\n";
            cin >> courseName;
            cin >> credit;
            validation = false;
            while(!validation){
                if(cin.fail()){
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Invalid input credit, please try again, then enter Coff, TD & Exam\n";
                    cin >> credit;
                }
                else
                    validation = true;    
            }
            validation = false;
            cin >> coff;
            while(!validation){
                if(cin.fail()){
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Invalid input coff, please try again, then enter TD & Exam\n";
                    cin >> coff;
                }
                else{
                    validation = true;
                }            
            }
            cin >> TdPoint;
            validation = false;
            while(!validation){
                if(cin.fail()){
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Invalid input Td Point, please try again, then enter Exam\n";
                    cin >> TdPoint;
                }
                else
                    validation = true;
            }
            cin >> examPoint;
            validation = false;
            while(!validation){
                if(cin.fail()){
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Invalid input examPoint, please try again\n";
                    cin >> examPoint;
                }
                else 
                    validation = true;
            }
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
    choise = validations(choise);
    if(choise == 0){
        cout << "bye\n";
        exit(0);
    }
    else if(choise == 1){
        gpa.print();
    }
}