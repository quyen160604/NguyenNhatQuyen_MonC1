//This program totals and average the sales figures for any
// number of day s the figues are store on a dynamicalyy
// allcated array .
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double *sales = nullptr, // to dynamisally allocate an array
           total = 0.0 , // Accumulator 
           average ;     // to hold average sales
    int numDays,        // to hold the number of days of asles
        count ;          // counter variable

    // get the number of day of sales .
    cout << "how many days of sales sigures do you wish ";
    cout << "to process ? ";
    cin >> numDays;

    //Dynamisally allocate array large enough to hold 
    //That many days of sales amounts.
    sales = new double[numDays];

    // Get the sales figures for each day.
    cout << "enter the sales figures below. \n";
    for (count = 0 ; count < numDays ; count ++)
    {
        cout << " Day " << (count +1 )<< ":";
        cin >> sales[count];
    }
    //Calculate the total sales
    for (count= 0 ; count < numDays; count ++)
    {
        total += sales[count];  
    }

    // Calculate thhe average salesper day 
    average = total / numDays;

    // Display the result 
    cout <<  fixed << showpoint << setprecision(2);
    cout << "\n\n Total sales : $ "<< total<< endl;
    cout << "Average Sales : $ "<< average << endl;
    
    //free  dynamically allocated memory
    delete [ ] sales;
    sales = nullptr; // Make sales a null pointer.
    return 0 ; 
}