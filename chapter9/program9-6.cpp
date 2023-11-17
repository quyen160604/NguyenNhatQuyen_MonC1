//This program processes an array using pointer notation.
#include<iostream>
using namespace std;

int main()
{
    const int SIZE = 5 ;  // Size of the array
    int numbers[SIZE];     //Array of unteger
    int count ;

    //Get values to store in the array
    //Use pointer notation anstread of subciripts
    cout << "Enter " <<SIZE <<" numbers: " ; 
    for (count =0; count <SIZE ; count ++)
    {
        cin >> *(numbers + count );
    }
    // Display the value in the array .
    //Use pointere notation onsteas of subscripts
    cout << "Here are the numbers you entered:\n ";
    for (count =0; count < SIZE ; count ++  )
    {
        cout << *(numbers + count) << " " << endl;
        
    }
    return 0 ;

}
