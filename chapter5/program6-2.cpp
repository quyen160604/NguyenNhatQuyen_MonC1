//The function displayMessage is repeatedly callled from a loop.
#include <iostream>
using namespace std;

//***********************************
// Definition of function diaplayMessage 
// This function displayMessage 
//*****************************************

void displayMessage()
{
    cout << "Hello from the function displayMessage.\n";    
}
//*******************************************
//Function main                             *
//*******************************************

int main ()
{
    cout <<"Hello from main.\n";
    for (int count =0; count <5; count++)
    
        displayMessage(); // CalldisplayMessage 
        cout << "Back in function main agian.\n";
   
return 0;
}