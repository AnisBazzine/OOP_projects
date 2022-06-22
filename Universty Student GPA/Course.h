#include <iostream>
#include <string.h>
using namespace std;
class Course{
private:
    string nameCourse;
    float Td, exam;
    float coff; // coefficient
    float credit;
public:
    Course();
    Course(string n, float, float, float, float);
    
    void setName(string n);
    void setTd(float);
    void setExam(float);
    void setCoff(float);
    void setCredit(float);

    string getName();
    float getTd();
    float getExam();
    float getCoff();
    float getCredit();
    float getFinalCredit();
    float getFinalAvg();
    float getAvg();
    
    void printCourseInfo();
    void printFailInfo();
};