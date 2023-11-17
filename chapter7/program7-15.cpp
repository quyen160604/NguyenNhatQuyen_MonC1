//This program  user two parallel arrays : one for hours
// workes and one for pay rate.
#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    const int NUM_EMPLOYEES = 5; // Number of employees
    int hours[NUM_EMPLOYEES];    // Array to hold hours
    double payRate[NUM_EMPLOYEES];              // Hourly pay rate
    
    // Input the hours worked and the hourly pay rate.
    cout << "Enter the hours worked by "
         << NUM_EMPLOYEES << "employees and their\n"
         << "hourly pay rates.\n";
    for (int index = 0 ; index < NUM_EMPLOYEES; index++ )
    {
        cout << "Hours worked by employee #"<< (index+1)<< ":";
        cin >> hours[index];
        cout << "Hourly payy rate for employee #" << (index +1)<< " :";
        cin >> payRate[index];   
    }

    // Display each employees's gross pay .
    cout << "here is the gross pay for each employees:\n" ;
    cout << fixed << showpoint << setprecision (2);
    for (int index =0 ; index <NUM_EMPLOYEES; index++ )
    {
        double grossPay = hours[index] *payRate[index];
        cout << "Employee #"<< (index + 1);
        cout << ": $ "<< grossPay << endl;
    }
    return 0 ;

}
