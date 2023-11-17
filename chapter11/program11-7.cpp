//This program uses a fucntion to return a structure .this 
// is a modification of program 11-2
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const double PI= 3.14159;

//structure  declaration
struct Cricle 
{
    double radius ;
    double diameter ;
    double area;
};

//Fucntion prototype
Cricle getInfo();

int main ()
{
    Cricle c ;

    //get data about the cricle 
    c = getInfo() ;

    //Calclulate the cricle area
    c.area = PI *pow(c.radius, 2.0);

    //display the cricle data 
    cout << "the radius and area of the cricle are:\n";
    cout << fixed << showpoint << setprecision(2);
    cout << "Radius: " << c.radius << endl;
    cout << "Area :" << c.area << endl;
    return 0 ;
}

//****************************************************************
// Definition of function getInfo. This function uses a local *
// variable, tempCircle, which is a circle structure. The user *
// enters the diameter of the circle, which is stored in *
// tempCircle.diameter. The function then calculates the radius *
// which is stored in tempCircle.radius. tempCircle is then *
// returned from the function. *
//****************************************************************
Cricle getInfo()
{
    Cricle temCricle ;

    //Store cricle data in the temporary variable .
    cout << "Enter the diameter of a cricle :";
    cin >> temCricle.diameter;
    temCricle.radius = temCricle.diameter/ 2.0;

    //return the temporary variabale 
    return temCricle;
}
