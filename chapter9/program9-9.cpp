//This program uses a pointer to display the contentd of an array.
#include <iostream>
using namespace std;

int main ()
{
    const int SIZE= 8  ;
    int set[SIZE]= {5,10,15,20,25,30,35,40};
    int *numPtr= nullptr;  // pointer
    int count ; // counter variable for loops

    //make numPtr to diaplay the array contents.
    numPtr = set;

    //use the pointer to thisplay the array contents ,
    cout << "the numner in set are: \n";
    for(count =0 ;count < SIZE ; count++ ) 
    {
        cout << *numPtr << " ";
        numPtr++;
    }

    //Diplay the array contents in reverse order.
    cout << "\nThe number in set backward are : \n";
    for (count =0; count <SIZE ; count ++)
    {
        numPtr --;
        cout << *numPtr <<" ";
    }
    return 0;
    

}