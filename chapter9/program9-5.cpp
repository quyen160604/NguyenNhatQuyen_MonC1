//this program show an array name being dereferenced with the.
// operator.
#include <iostream>
using namespace std ;

int main()
{
    short numbers[]={10,20,30,40,50};

    cout << "The first element of rhe array is ";
    cout << *numbers << endl ;
    return 0 ;
}


