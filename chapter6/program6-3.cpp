// This program has three function :main , first anf second.
#include <iostream>
using namespace std;

// ******************************
// Definition of function first
// this function diplays a message 
//**********************************

void first ()
{
    cout << "I am now inside the function first.\n";    
}

void second () 
{
    cout << "I am now inside the function second.\n";
}

//**********************************
//Definition of function second    *
// This function displays a message*
//**********************************

int main()
{
    cout << "I am starting in function main.\n";
    first(); // Call function first
    second();// Call function second
    cout << "Back in function main again .\n";
    return 0;
}
    