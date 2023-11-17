//This program uses a point to display the contents
// of an integer array.
#include <iostream>
using namespace std;

int main()
{
    int set[8] = {5,10,15,20,25,30,35,40};
    int *nums= set;  // make number in the array.

    cout << "The number inn set are :\n" ;
    cout << *nums << " ";  // display first alement

    while (nums <&set[7])
    {
        // Advance nums to point to the next element .
        nums++;
        // Diplay the value pointed to by nums 
        cout << *nums << " ";
    } 

    //Dsplay the number in reverse are  oder .
    cout << "\nThe number in set backward are : \n ";
    cout << *nums << " ";
    while (nums > set )
    {
        // move backward to the previous element .
        nums--;
        // Diplay the vlue pointer ti by nums.
        cout << *nums << " ";
    }
    return 0;

}