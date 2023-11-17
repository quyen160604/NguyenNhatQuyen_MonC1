//This program has two functions :main and diaplayMessage
#include <iostream>
using namespace std;

    //****************************************
    // Definition of fuctiond diplayMesssage *
    //This fuction displlay a greeting .     *
    //****************************************

    void displayMessage ()
    {
        cout << "Hello from the fuction dipayMessage.\n";       

    }
    //******************************************
    //Functinon main
    //******************************************
    int main ()
    {
        cout << "Hello from main .\n";
        displayMessage();
        cout << "Back in function main agian.\n";
        return 0; 
    } 