#include <iostream>
using namespace std;
// Function Prototypes
void first ();
void second();

int main ()
{
    cout << "I am starting function  main .\n" ;
    first();
    second();
    cout << "Back in function main again .\n ";
    return 0;
}

// **************************************
//Definition of function  first.
// This function display a message 
// **************************************

void first ();
{
     cout << " I am now inside the function first.\n ";
}

//************************************
// Definition of  function second.
//This function displays a message . *
//************************************

void second ();
{
cout << "I a now inside the function second .\n";
}

   
