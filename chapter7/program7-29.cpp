//This origram demonstrates the vector pop_back member function .
#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    vector<int> values;

    //Store values in the vector .
    values.push_back(1);
    values.push_back(2);
    values.push_back(3);
    cout << "the size of values is  "<< values.size()<< endl;

    //Remove a value from the vector.
    cout <<"Popping a values from the vector ...\n";
    values.pop_back();
    cout << "The size of values is now  "<< values.size ()<< endl;

    // Now remove anther values from the vector
    cout << "Popping  a value from the vector  ...\n";
    values.pop_back();
    cout << "The sixe of values is now " << values.size()<< endl;

    // Remove the last values from the vector .
    cout << "popping a value from the vector ...\n";
    values.pop_back();
    cout << "The size of value is now "<< values.size ()<< endl;
    return 0 ;
}