//This program uses subscript notation wiith a pointer variable and
// pointer notation with an array name.
#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    const int NUM_COINS= 5 ;
    double coins[NUM_COINS]= {0.05,0.1,0.25,0.5,1.0};
    double *doublePtr ;  // Pointer to a double 
    int count ;   // Array index
    // Assign the address of the conis array to doublePtr.
    doublePtr   = coins;

    //Display the content of the coins array >use subscripts 
    //With the pointer !
    cout << "Here are the value in  the coins array : \n ";
    for (count = 0 ; count < NUM_COINS ;count++  )
    {
        cout << doublePtr [count ]<< " ";
    }

    // Display the conents of the array again , but this time
    //use pointer notationn with the array name!
    cout << "\nAnd here they are again :\n ";
    for ( count =0 ; count < NUM_COINS; count ++  )
    {
        cout << *(coins + count )<< "   " << endl ; 

    } 
    return 0 ;
}