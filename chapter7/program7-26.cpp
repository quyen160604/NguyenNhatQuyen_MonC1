//This program demonstrates the rabge-based for loop with a vector.
#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    // Define and initialize a vector.
    vector<int>numbers (5);

    //Get balues for the elements.
    for (int &val : numbers)
    {
        cout << "enter an integer value: ";
        cin >> val;        
    }

    //Display the vector slements.
    cout << "here are the values tou entered:\n";
    for (int val : numbers)
    {
        cout << val << endl;
    }  
    return  0;
    

}