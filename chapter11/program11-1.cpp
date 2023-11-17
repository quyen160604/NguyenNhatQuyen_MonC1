//This program demonstractes the use of structures.
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct PayRoll
{
    int empNumber;  
    string name;
    double hours;
    double payRate;
    double grossPay;
};

int main()
{
    PayRoll employee;

    //get the employee's number.
    cout <<"Enter the employee's number: ";
    cin >> employee.empNumber;

    //get the employee's name
    cout << "enter the employee's name ";
    cin.ignore();
    getline(cin,employee.name);

    //get the hours wroked by the employee.
    cout << "How many hours did the employee work? ";
    cin >> employee.hours;

    //Caluclate the employee's hoursly pay rate.
    cout << "What is the employee' hoursly payrate "; 
    cin >> employee.payRate;

    //Claclute the employee's gross pay
    employee.grossPay = employee.hours * employee.payRate;

    // Display the employee data.
    cout << "Here is the employee's payroll data:\n";
    cout << "Name: " << employee.name << endl;
    cout << "Number: " << employee.empNumber << endl;
    cout << "Hours worked: " << employee.hours << endl;
    cout << "Hourly payRate: " << employee.payRate << endl;
    cout << fixed << showpoint << setprecision(2);
    cout << "Gross Pay: $" << employee.grossPay << endl; 

return 0 ;
}
