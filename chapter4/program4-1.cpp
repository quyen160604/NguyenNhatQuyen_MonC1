//This program displays the of true and false states.
#include <iostream>
using namespace std;

int main ()
{
    bool trueValue , falseValue;
    int x = 5 ;
    int y = 10;
    trueValue  = x <y ;
    falseValue = x ==y ;

    cout << "True is " << trueValue << endl;
    cout << "false is " << falseValue << endl;
    return 0 ;
}