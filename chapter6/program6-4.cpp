//this program three function ;mian , deep, and deeper
#include <iostream>
using namespace std;

// ***********************************
// Definition of function deeper     *
// This function display a message   *
// ***********************************

void deeper()
{
    cout << "I am now inside the fucntion deeper.\n" ;    
    
}
// ***********************************
// Definition of function deep
// This function display a message 
// ***********************************

void deep()
{
    cout << "I am now insdie the function deep .\n";
    deeper ();
    cout <<" Back in function main agian .\n";
}

//***************************************
// Function main 
//****************************************

int main ()
{
    cout << "I m starting in function main .\n";
    deep();  // Call function deep
    cout <<"Back in function main again .\n";
    return 0 ;

}