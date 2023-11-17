//This program demonstrates a sucntion that uses  a
// pointer to a tructure variable as a parameter
#include <iostream>
#include <string >
#include <iomanip>
using namespace std;

struct Student
{
    string name ;
    int idNum ;
    int creditHours;
    double gpa;
};

void getData(Student *);

int main ()
{
    Student freshman;

    //get the student data
    cout << "Enter the following student data:\n";
    getData(&freshman);
    cout << "\nHere is the student data you entered :\n";

    //Now display the data stored in freshman
    cout << setprecision(3);
    cout << "Name :"<< freshman.name << endl;
    cout << "ID number:" << freshman.idNum << endl;
    cout << "Credit :" << freshman.creditHours << endl;
    cout << "GPA: " << freshman.gpa << endl;
    return 0 ;
}
//*******************************************************
// Definition of function getData. Uses a pointer to a *
// Student structure variable. The user enters student *
// information, which is stored in the variable. *
//*******************************************************
void getData(Student *s )
{
    //get the student name 
    cout << "Student name : ";
    getline(cin , s-> name);

    //get the student ID number
    cout << "Student ID number :";
    cin >> s->idNum;

    //get the credit hours erolled 
    cout << "Credit hours enrolled:";
    cin >> s-> creditHours;

    //get the GPA
    cout << "Current GPA :";
    cin >> s-> gpa;
    
}