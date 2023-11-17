//This program calculates hourly wages , including overtime 
#include <iostream>
using namespace std;

int main()
{
    double regularWages ,         // To hold regular wages
           basePayRate = 18.25,   // Base pay rate 
           regularHours = 40.0,   // hours woked less overtime 
           overtimeWages,         // To hold overtime wages
           overtimePayRate = 27.78 ,//OverTime hours worked
           overtimeHours = 10,
           totalWages;
     // Calculate the regular wages. 
     regularWages = basePayRate * regularHours; 

     // Calculate the regular wages.
     regularWages = overtimePayRate * overtimeHours;

     // calculate the overtime waes.
     totalWages = regularWages + overtimeWages;

     //Dislay the total wages.
     cout << "Wages for this week are $"<< totalWages << endl;
     return 0 ;    
}