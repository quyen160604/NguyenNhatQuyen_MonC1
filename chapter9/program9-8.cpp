//This program uses th sddrress of each alement in the array.
#include <iostream>
#include <iomanip>
using namespace  std;

int main()
{
    const int NUM_COINS = 5;
    double coins[NUM_COINS]= {0.05,0.1,0.15,0.2,0.25};
    double *doublePtr  = nullptr;  // Pointer to a double 
    int count ;                   // Array index

    // Use the pointer to display the values in the array
    cout << "Here are the values in the coins array: \n";
    for (count = 0 ; count < NUM_COINS; count ++) 
    {
        //Get the address of an array alement .
        doublePtr  = &coins[count];

        //Display the contents of the element 
        cout <<  *doublePtr  << " " ; 
        cout << endl;   
    }

     return 0; 
}