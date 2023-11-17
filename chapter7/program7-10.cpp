//This program demondtrstes the range-based  for loop.
#include <iostream>
using namespace std;
int main()
{
    // Define the values in the arrray.
    int numbers[] = {10,20,30,40,50};

    // Display the values in the array.
    for (int x : numbers )
    cout << x << endl;
    return 0 ;
}
