//this program uses the & operator to determine a  variable's
/// Address and the sizeof perrator to determine its size.
#include <iostream>
using namespace std;

int main ()
{
    int x= 25;
    cout << " The address of x is "<< &x << endl;
    cout << "the size of is "<< sizeof(x)<<"bytes\n";
    cout << "The value in x is "<< x << endl;
    return 0;
}