//This program creates three instances of the Rectangle class.
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

int main ()
{
    double number ;
    double totalArea ;
    Rectangle *kitchen = nullptr;
    Rectangle *bedroom  = nullptr;
    Rectangle  *den= nullptr;

    // Dynamically allocate the objects
    kitchen= new Rectangle;
    bedroom = new Rectangle;
    den = new Rectangle;

    //Get the kitchen dimension
    cout << "What the kitchen's length : ";
    cin >> number;
    kitchen -> setLength(number);
    cout << "What is the kithen's width: ";
    cin >> number;
    kitchen -> setLength(number);

    //Get the bedroom dimension 
    cout <<"What is the bedroom's length:";
    cin >> number;
    bedroom -> setLength(number);
    cout <<"What is the bedroom's width : ";
    cin >> number;
    bedroom -> setWidth(number);

    //Get the den dimension
    cout << "What is the den's length:";
    cin >> number;
    den -> setLength(number);
    cout <<"What is the den's width: ";
    cin >> number;
    den -> setWidth(number);

    //Calculate the total area of the three rooms
    totalArea = kitchen -> getArea() + bedroom ->getArea()
                + den -> getArea();

    //Display the total area of the three rooms
    cout << "The total area of the three rooms is"
         << totalArea << endl;
    
    //Detele the objects from menory
    delete kitchen;
    delete bedroom;
    delete den;
    kitchen = nullptr;
    bedroom = nullptr;
    den = nullptr;
    return 0;
}