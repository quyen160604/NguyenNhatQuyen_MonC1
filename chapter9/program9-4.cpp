// This program demonstrates a pointer variable referencing
// Diffeerent variables.
#include <iostream>
using namespace  std;
int main()
{
    int x = 25,y=50,z= 75; //There int variables
    int *ptr = nullptr;    // Pointer variables

    // display the contenst of x, y,and z :.
    cout << "here are the values  of x , y ,and z: \n ";
    cout << x << " n " << y << "  " << z << endl;

     //use the pointer to mainpluate x,y ,and z.

     ptr = &x ;  // Store the address of x in ptr .
    *ptr += 100; // add 100 to the inx

     ptr = &y;  // Store the address of y in ptr.
     *ptr += 100;  // add 100 to the value in y 

     ptr = &z;  // Store the address of z in ptr.
     *ptr += 100 ;// add 100 to the value in z.

     //Diplay the content of x,y and z
     cout << "Once again , here are the value  of x, y and z:\n ";
     cout << x << "  " << y << "  " << z << endl;
     return 0 ;


}