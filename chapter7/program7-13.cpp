//This program user a range-based for loop to 
// modify the contents of an array.
#include <iostream>
using namespace std;
int main()
{
    const int SIZE = 5;
    int numbers[5] ;

    //Get values for the array.
    for (int &x : numbers )
    {
        cout << "Enter an integer value: ";
        cin >> x;
    }
    // Display the values in the array.
    cout << "Here are tthe values you entered:\n";
    for (int x :numbers)
    {
    cout << x << endl;
    }
    return 0 ;  
}