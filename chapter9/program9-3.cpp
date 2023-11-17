//This program demonstrates the use of the indirection operator 
#include <iostream >
using namespace std;

int main()
{
    int x = 25;
    int *ptr= nullptr;  // Pointer variable , can point to an int 

    ptr= &x; // Store the address of x in ptr

    // Use both x and ptr to display the value in x.
    cout << "Here id the value in x , printed twice :\n ";
    cout << x << endl;  // Display the contents of x
    cout << x << endl;   //Display the contents of x
    cout << *ptr << endl; // Display the contebt s of x

    //Assighn 100 to  the location pointed to by ptr . this
    // will actually assign 100 to x.
    *ptr = 100;
    
    // USe both x and ptr to display the value in x .
    cout << "once again here is the  value in x: \n ";
    cout << x << endl;  // Display the contents of x
    cout << *ptr << endl;  // Diplay the contents of x
    return 0;      

}