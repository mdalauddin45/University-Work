#include <bits/stdc++.h>
using namespace std;

struct course {
    string name;
    double marks;
    double gpa;
    string lettergrade;
    int credits;
};

const pair<int, pair<double,string>> gm[] = {
    {100,{4.0,"A"}},
    {90,{4.0,"A"}},
    {85,{3.7,"A-"}},
    {80,{3.3,"B+"}},
    {75,{3.0,"B"}},
    {70,{2.7,"B-"}},
    {65,{2.3,"C+"}},
    {60,{2.0,"C"}},
    {55,{1.7,"C-"}},
    {50,{1.3,"D+"}},
    {45,{1.0,"D"}},
    {40,{0.7,"D-"}},
    {0,{0.0,"F"}}
};

void calculateMarksAndGrade(double marks, double &gpa, string &lg) {
    for(auto mapping: gm){
        if(marks >= mapping.first){
            gpa = mapping.second.first;
            lg = mapping.second.second;
            break;
        }
    }
}

double calculateCGPA(vector<course> &courses) {
    double totalGradePoints = 0.0;
    int totalCredits = 0;
    for(auto &course: courses){
        calculateMarksAndGrade(course.marks, course.gpa, course.lettergrade);
        totalGradePoints += course.gpa * course.credits;
        totalCredits += course.credits;
    }
    return (totalCredits == 0) ? 0.0 : totalGradePoints / totalCredits;
}

int main(){
    int numCourses;
    cout << "Enter the number of courses: ";
    cin >> numCourses;

    vector<course> courses(numCourses);
    for(int i = 0; i < numCourses; ++i){
        cout << "Enter details for Course " << i + 1 << ":" << endl;
        cout << "Name: ";
        cin >> courses[i].name;
        cout << "Marks: ";
        cin >> courses[i].marks;
        cout << "Credits: ";
        cin >> courses[i].credits;
    }

    double cgpa = calculateCGPA(courses);
    cout << "CGPA: " << cgpa << endl;
    return 0;
}
