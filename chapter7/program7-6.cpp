//This program unsafely accessses an area of memory by writing
// values beuomd an arrays boundary
// WARNING :If you compile and run this program , it could crash.
#include<iostream>
using namespace std;
int main()
{
    const int SIZE = 3 ;  // constant for the array size
    int values[SIZE];
    int  count ;          //Loop counter variable

    // Attemp to stre five number in the three_element array.
    cout << "I will store 5 numbers in a 3-element array!\n";
    for (count =0 ; count <5 ; count++ )
    {
        values[count] =100;        
    }

    //If the program is still running , display the numbers.
    cout << "If you see this message , it means the program \n" ;
    cout << "has no crashed ! Here are the nnumbers:\n ";
    for (count =0; count <5 ; count++)
    {
        cout << values[count] << endl;
        return 0 ;
    } 
    

}    