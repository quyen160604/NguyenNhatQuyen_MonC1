//This program demonstraters the range-based for loop.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string planets[]= {"Merucy","Venus","Eather","Mars",
                           "Jupiter","Saturn","Uranus",
                           "Neptune", "Pluto(a dwarf planet)" };  

   cout << "Here are the plamets:\n";

   //Display the value in the array.
   for (string x : planets) 
   cout << x << endl ;    
   return 0;  
}  
  

