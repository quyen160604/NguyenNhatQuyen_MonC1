// This program  demostartes a function with a parameter.
#include <iostream>
using namespace std;

// Function Prototupe
void displayValue(int);

int main ()
{
    cout << "I am passing 5 to dislayValue .\n";
    displayValue(5);
    cout << "Now I am back in main .\n";
    return 0 ;
}
// ****************************************
// Definition of function displayValue.
// It uses an integer prameter whose value is displayed.
//*******************************************

void displayValue (int num)
{
    cout << "The value is  " << num << endl;
}