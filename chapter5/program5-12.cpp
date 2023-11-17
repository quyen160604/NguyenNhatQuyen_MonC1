//This program takes daily sales figures over a period of time 
// and calculates their total.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int days ;  // Number of day
    double total = 0.0; // Accumulator , intialized with 0 

    //Get yje number of day.
    cout << "For how many day so you have sales figures? ";
    cin >> days;

    //Get the sales for each day and accumlate a total.
    for (int count = 1; count<= days; count++ )
    {
        double sales;
        cout << "Enter the sales for day " << count << ": ";
        cin >> sales;
        total += sales; //Accumulate the running total.
    }
    // Display the total sales .
    cout << fixed << showpoint<< setprecision(2);
    cout << "The total sales are $ "<< total << endl;
    return 0 ;
    
}