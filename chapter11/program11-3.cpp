//This program demonstractes partially initialized
// structure variable 
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct EmployeePay
{
    string name ;
    int empNum ;
    double payRate ;
    double hours ;
    double grossPay;

};
int main()
{
    EmployeePay employee1 = {"Netty Ross ", 141,18.75};
    EmployeePay employee2= {"Jill Sandburg", 142,17.50};

    cout << fixed << showpoint << setprecision(2);

    //Calculate pay tfor employee
    cout << "Name: " << employee1.name << endl;
    cout <<"Employee Number " << employee1.empNum << endl;
    cout << "Enetr the hours wroked  by this employee: ";
    cin >> employee1.hours;

    employee1.grossPay = employee1.hours * employee1.payRate;
    cout << "gross pay : " << employee1.grossPay << endl << endl;

    // Calculate pay for employee2
    cout << "Name: " << employee2.name << endl;
    cout << "Employee Number: " << employee2.empNum << endl;
    cout << "Enter the hours worked by this employee: ";
    cin >> employee2.hours;

    employee2.grossPay = employee2.hours * employee2.payRate;
    cout << "Gross Pay: " << employee2.grossPay << endl;
   return 0 ;
}