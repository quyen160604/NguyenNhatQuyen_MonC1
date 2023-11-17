//This program demonstes a pointer to const prameter 
#include <iostream>
using namespace std;

void displayValues(const int *, int);

int main ()
{
    // Array sizes 
    const int SIZE = 6;

    // Define an array of const ints.
    const int array1[SIZE]= {1,2,3,4,5,6};

    // define an array of nonconst ints.
    int array2[SIZE]= {2,4,6,8,10,12};

    //Display an the contents of the nonconst array.
    displayValues(array1, SIZE );

    //Display an the contents of the nonconst array.
    displayValues(array2,SIZE);
    return 0 ;
}
//******************************************************
//The dipplay Values fucntion uses a pointer to    
// parameter to display the constent of an array. 
//******************************************************

void displayValues(const int *numbers , int size)
{
    //Display all the values .
for (int count = 0 ; count < size ; count ++)
{
    cout << *(numbers + count) << " ";
}
 cout << endl;
}
