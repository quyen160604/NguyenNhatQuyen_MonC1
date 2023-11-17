//This is a menu-driven program that makes a function call
// for each selection the user makes.
#include <iostream>
#include <iomanip>
using namespace std;

//Function prototypes
void showMenu();
void showFees(double ,int ) ;

int main ()
{
    int choice ;
    int months;

    // constants for the menu choices
    const int ADULT_CHOICE = 1,
              CHILD_CHOICE =2,
              SENIOR_CHOICE =3 ,
              QUIT_CHOICE= 4;

    // constans for membership rates
    const double ADULT= 40.0,
                 CHILD  = 20.0,
                 SENIOR = 30.0;

    // Set up numeric output formatting .
    cout << fixed << showpoint << setprecision (2);

    do 
    {
        // Display the menu and get the user's choice 
        showMenu();
        cin >> choice;

        // Validate the menu selection .
        while (choice <ADULT_CHOICE || choice > QUIT_CHOICE)
        {
            cout << "please enter a valid menu choice:";
            cin >> choice;

        }   
    }       
    //if the usee dose not want to quit , proceed.
    if (choice != QUIT_CHOICE)
    {
        // Get the number of months.
        cout << "for how many months ? ";
        cin >> months;

        //Display the menbership fees.
        switch (choice)
        {
        case ADULT_CHOICE:
            showFees(ADULT,months);            
            break;
        case CHILD_CHOICE:
            showFees(CHILD,months);            
            break;
        case SENIOR_CHOICE:
            showFees(SENIOR,months);            
            break;
        }
    }        
                            
} while (choice != QUIT_CHOICE );
  return 0;
}
// *********************************
// Definition of function showMenu which displays the menu. 
// ********************************************************

void showMenu()
{
    cout << "\n\tHealth Club Membership menu\n\n "
         <<"1.Standard Adult Membership\n"
         <<"2.Child Membership\n"
         <<"3.Senior Citizen Membership\n"
         <<"4.Quit the Program\n\n"
         << "enter your choice: ";         
}
//***************************************************************
// Definition of function showFees.The memberRate parameter holds*
// the monthly membership rate and months parameter golds the *
// number of months .The function displays the total charages
//**************************************************************

void showFees(double memberRate,int months)
{
    cout << "the total charges are $"
         << (memberRate * months)<< endl; 
}