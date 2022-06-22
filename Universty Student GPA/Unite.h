#include <iostream>
#include <vector>
#include "Course.h"

using namespace std;

class Unite{
private:
    vector <Course> courses;
    float totalCourses;
public:
    Unite();
    Unite(vector <Course> , int);
    void setTotalCourses(int);
    void setCourses(vector <Course>);

    float getTotalCourses();
    vector <Course> getCourses();
    float getTotalCoff();
    float getAvgUnite();
    float getCridets();
};