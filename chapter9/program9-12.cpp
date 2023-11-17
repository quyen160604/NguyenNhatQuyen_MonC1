//This program demonstrates that a pointer may be used as a 
//prameter to accept the address of array.
#include <iostream>
#include <iomanip>
using namespace std;

//function prototype
void getSales (double *, int );
double totalSales(double *, int) ;

int main()
{
    const int QTRS = 4;
    double sales[QTRS];

    //get the sales data for sll quarters.
    getSales(sales, QTRS);

    // Set the numeric output formating .
    cout << fixed << showpoint << setprecision(2);

    //display the total sales for the year.
    cout << "The total sales for the year are $";
    cout << totalSales(sales, QTRS)<< endl;  

}

//*****************************************************************
//Definition of getSales . This function uses a pointer to accept.*
//the address of an array of double , the function asks the user. *
//To enter sales figures and store them in the array.             *
//*****************************************************************
void getSales(double *arr, int size)
{
    for (int count = 0 ; count < size ; count++ )
    {
        for (int count = 0 ; count < size ; count++)
        {
            cout << "Enter the sales figure for quarter ";
            cout << (count + 1) << " : ";
            cin >>arr[count];
        }
    }
}
    //**************************************************************
    //Definition of totalSales , this function uses a  pointer to. *
    //accept the address of an array. the function return the total*
    //of the element in the array.                                 *
    //**************************************************************
    double totalSales(double *arr, int size)
    {
        double sum = 0.0;

        for (int count = 0 ; count <size ; count++)
        {
            sum += *arr;
            arr++;
        }
      
    return sum ;
    } 
