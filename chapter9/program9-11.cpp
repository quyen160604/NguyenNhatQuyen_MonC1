//This program uses two functions that accept addresses of 
//valriable as arguments.
#include <iostream>
using namespace std;

// Function prototype
void getNumber (int *);
void doubleValue (int *);

int main()
{
    int number ;

    // call getNumber and pass the address of number.
    getNumber(&number);

    //call doubleValue and pass the address of number .
    doubleValue(&number);

    // Display the value in number .
    cout << "that value double is " << number << endl;
    return 0; 
}

//*****************************************************************
//Definition of getnumber . The parameter , input , is a pointer. *
// This funcyion asks the for a number . the value entered.       *
// is store in the variable pointer to by input.                  *
//*****************************************************************

void getNumber(int *input)
{
    cout << "enter an integer number : ";
    cin >> *input;
} 

//*****************************************************************
//Definition of doubleValue . the prameter , val , is a pointer.  *
//This function multippliews the variable to buy val by           *
// two.                                                           * 
//***************************************************************** 

void doubleValue(int *val)
{
    *val *= 2;
}