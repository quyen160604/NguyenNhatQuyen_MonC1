//This program demonstrates that chnges to a function parameter
#include <iostream>
using namespace std;

// Function prototype
void changeMe(int );

int main ()
{
    int number =12;

    // Display the value in number .
    cout << "number is "<< number << endl;

    // Call chageMe , passing the value in number 
    //as an arheument.
    changeMe(number);

    //Display the value in number agai .
    cout << "now back in main ,the value of ";
    cout << "number is "<< number << endl;
    return 0;   
}

//*************************************
// Definition of function changeMe.
// This functon changes the value of the prameter myValue.

void changeMe (int myValue )
{
    // change the value of myValue to 0.
    myValue=0;

    //Display the value in myValue.
    cout << "now the value is "<< myValue << endl;
}