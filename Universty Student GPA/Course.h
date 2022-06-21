#include <iostream>
#include <string.h>

class Course{
private:
    char * nameCourse;
    float Td, exam;
    int coff; // coefficient
    int credit;
public:
    Course();
    Course(char * nameCourse, float Td, float exam, int coff, int credit);
    
    void setTd(float Td);
    void setExam(float exam);
    void setCoff(int coff);
    void setCredit(int credit);

    float getTd();
    float getExam();
    int getCoff();
    int getCredit();
    int getFinalCredit();
    float getFinalAvg();
    void printCourseInfo();
    void printFailInfo();
};