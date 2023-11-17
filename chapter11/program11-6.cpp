//This program has fucntion that accept structure variable 
//as arguments
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct InventoryItem
{
    int partNum ;
    string description;
    int onHand;
    double price ;
};

//Fucntion prototypes
void getItem(InventoryItem&);
void showItem(InventoryItem);

int main()
{
    InventoryItem part;
    getItem(part);
    showItem(part);
    return 0;
}

//************************************************************
// Definition of function getItem. This function uses        *
// a structure reference variable as its parameter. It asks  *
// the user for information to store in the structure.       *
//************************************************************

void getItem(InventoryItem &p)
{
    //get the part number.
    cout << "Enter the part number: ";
    cin >> p.partNum;

    //get the part description
    cout << "Enter the part desciption :";
    cin.ignore();
    getline(cin, p.description);

    //get the quantily on hand
    cout << "Enter the quantity on hand: ";
    cin >> p.onHand;

    //get the unit price .
    cout << "Enter the unit pricce :";
    cin >> p.price;
}
//***********************************************************
// Definition of function showItem. This function accepts *
// an argument of the InventoryItem structure type. The *
// contents of the structure is displayed. *
//***********************************************************

void showItem(InventoryItem p )
{
    cout << fixed << showpoint << setprecision(2);
    cout << "Part Number:" << p.partNum << endl;
    cout << "Deccripsion :" << p.description << endl;
    cout << "Unit On hand : " << p.onHand << endl;
    cout << "Price : $" << p.price << endl;
}