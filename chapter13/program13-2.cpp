//This program creates three instances of the Rectangle class
#include <iostream>
using namespace std;
class Rectangle
{
    private:
        double width;
        double length;
    public:
        void setWidth(double);
        void setLength(double);
        double getWidth() const ;
        double getLength()const ;
        double getArea() const ;
};
// *****************************************
//setWidth assigns a value to the width member.
//**********************************************

void Rectangle::setWidth(double w)
{ 
    width = w;
}
void Rectangle::setLength(double len)
{
    length = len;
}
//***************************************************
// getWidth returns the value in the width member. *
//***************************************************
double Rectangle::getWidth() const
{
   return width;
} 

//****************************************************
// getLength returns the value in the length member. *
//****************************************************

double Rectangle::getLength()const 
{
    return length;
} 
//******************************************************
// getArea returns the product of width times length. *
//******************************************************
double Rectangle::getArea() const
{
    return length * width ;
}
/* Rectangle class declaration.
*****************************************************
 Function main *
*****************************************************
*/
int  main()
{
    double number ;
    double totalArea; 
    Rectangle kitchen ;
    Rectangle bedroom ;
    Rectangle den;

    //get the kitchen dimensions.
    cout << "What is the kitchen's length ?";
    cin >> number;
    kitchen.setLength(number);
    cout << "What is the kitchen is width ? ";
    cin >> number;
    kitchen.setWidth(number);

    //get the bedroom dimension .
    cout << "What is the bedroom is length? ";
    cin >> number;
    bedroom.setLength(number);
    cout <<"What is the bedroom width?  ";
    cin >> number;
    bedroom.setWidth(number);

   //get the den dimensions 
   cout << "What is the den length?";
   cin >> number;
   den.setLength(number);
   cout << "what is the den width?";
   cin >> number;
   den.setWidth(number);

   //Clculate the toatal the arae of the three rooms
   totalArea = kitchen.getArea () + bedroom.getArea() + den.getArea();

   //Display the total arae of the three rooms 
   cout << "The total area of the three rooms is "
        << totalArea << endl;
   return 0; 


}