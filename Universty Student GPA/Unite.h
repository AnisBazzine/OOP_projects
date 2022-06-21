#include <iostream>
#include <vector>
#include "Course.h"

using namespace std;

class Unite{
private:
    vector <Course> courses;
    int totalCourses;
public:
    Unite();
    Unite(vector <Course> courses, int TotalCourses);
    void setTotalCourses(int uniteCourse);
    void setCourses(vector <Course> courses);

    int getTotalCourses();
    vector <Course> getCourses();
    int getTotalCoff();
    float getAvgUnite();
};