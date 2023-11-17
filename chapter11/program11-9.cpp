//This progaram demonstrates a union 
#include <iostream>
#include <iomanip>
using namespace std;
union PaySousce 
{
    int hours ;
    float sales ;
};

int main ()
{
   
    PaySousce employee1;
    char payType;
    float payRate;
    float grossPay ;

    cout << fixed << showpoint << setprecision(2);
    cout << "This program calculates either hourly wages or \n:";
    cout << "sales commission.\n";

    //get the pay type , hours or commission 
    cout << "Enter H for hourly wages or C for commission :";
    cin >> payType;

    //Determine the gross pay , depending on the pay type 
    if(payType == 'H' || payType == 'h')
    {
        //This is an hourly paid employee .Get the 
        //pay rate and hours worked
        cout << "What is the hourly pay rate?";
        cin >> payRate ;
        cout << "How many hours were worked?";
        cin >> employee1.hours;

        //calculate and dipaly the gross pay
        grossPay = employee1.hours *payRate;
        cout << "gross pay : $"<< grossPay << endl;
    }
    else if (payType == 'C' || payType == 'c')
    {
        //This is a commission-paid employee .Get the 
        // amount of sales
        cout << "What are the total salse for this employee?";
        cin >> employee1.sales;

        //Calculate and display the gross pay 
        grossPay = employee1.sales * 0.01;
        cout << "Gross pay :$" << grossPay << endl;
    }

}