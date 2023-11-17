//This program demonstrates a simple class.
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
//*****************************************************
// Function main *
//*****************************************************
int main()
{
    Rectangle box ;    // Define an insstance of the Rectangle class
    double recWidth;   // local variable for width
    double recLength;  // local variable for length

    //get the rectangle's width and length from the user.
    cout << "This program will calculate the area of a \n";
    cout << "rectangle.What is the width? ";

    cin >> recWidth;
    cout <<"What is the length ?";
    cin >> recLength;

    // Store the width and length of the rectangle 
    // in the box object.
    box.setWidth (recWidth);
    box.setLength(recLength);
    
    //Display the rectangle's data .
    cout << "Here is the rectangle's data : \n";
    cout << "Width : " << box.getWidth() << endl;
    cout << "Length: " << box.getLength()<< endl;
    cout << "Area : " << box.getArea() << endl;
    return 0 ;

}
