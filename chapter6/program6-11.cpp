//This program uses a fucntion to prefrom divvision , If division 
// by zero is detected . the fucntion returns.
#include <iostream>
using namespace std;

//Fucntion prototype
void divide(double, double);

int main()
{
    double num1 ,num2;

    cout << "Enter two numbes and I will divide the first\n";
    cout << "Numbers by the second number: ";
    cin >> num1 >> num2;
    divide(num1, num2);
    return 0;
}

//*********************************************************************
//Definition of fucntion divide.
//use two parameter : agr1 and agr2 , The fucntion divide agr1  
//by agr2 and shows the result . if agr2 is zero , however , the 
//fucntion return.
//****************************************************************

void divide(double agr1, double agr2)
{
    if (agr2 ==0.0)
    {
        cout << "Sorry , I divide by zero. \n";
        return ;
    }
    cout << "The quotient is " << (agr1 / agr2 ) << endl;

} 