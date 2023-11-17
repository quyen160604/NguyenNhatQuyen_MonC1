 //This program uses nested structures
 #include <iostream>
 #include<string >
 using namespace std;

 //The Date structure holds data  about a late
 struct Date
 {
    int month ;
    int day;
    int year;
 };
 // th place structure holds a physical address
struct  Place
{
    string address;
    string city;
    string state;
    string zip;
};

//The EmployeeInfo sttructure hold an employee's date
struct EmployeeInfo
{
    string name;
    int employeeNumber;
    Date brithDate ;
    Place residence;
};
int main()
{
    //get teh manager name and employee number
    EmployeeInfo manager;
    cout << "Enter the manager's name :";
    getline(cin,manager.name);
    cout << "Enter the manager employee number:";
    cin >> manager.employeeNumber;

    //get the manager brith date
    cout << "Now enter the manager date of brith \n";
    cout << "Month(up to 2 digits): ";
    cin >> manager.brithDate.month;
    cout << "Day (up to 2 digits ):";
    cin >> manager.brithDate.day;
    cout << "Year";
    cin >> manager.brithDate.year;
    cin.ignore();

    //get the manager residence inforamtion
    cout << "Enter the manager street address: ";
    getline(cin ,manager.residence.address);
    cout << "City:";
    getline(cin, manager.residence.city);
    cout << "State: ";
    getline(cin , manager.residence.state);
    cout << "ZIP code : ";
    getline(cin , manager.residence.zip);

    //display the infomation just entered
    cout << "/nHere is the manager infomation:\n";
    cout << manager.name << endl;
    cout << "Employee number " << manager.employeeNumber << endl;
    cout << "Date of brith:";
    cout << manager.brithDate.month << "-";
    cout << manager.brithDate.day << "-" ;
    cout << manager.brithDate.year << endl;
    cout << "place of residence :\n";
    cout << manager.residence.address <<endl;
    cout << manager.residence.city << "-";
    cout << manager.residence.state << " ";
    cout << manager.residence.zip << endl;
    return 0 ;
}