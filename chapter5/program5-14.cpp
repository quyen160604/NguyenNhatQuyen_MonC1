// This program averages test scores. It asks the user for the 
// number of students and the number of test scores per student. 
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int numStudents , // Number of students
        numTests;     // Number of test per student 
    double total,     // Accumulator for tatal scores
           average;   // Avarage test score

    // Set up numeric output formating .
    cout << fixed << showpoint << setprecision(1);

    //Get the number of students.
    cout <<" This program averages test scores .\n" ;
    cout << "For how many students do you have scores? ";
    cin >> numStudents ;
    
    // Get the number of test scores per student. 
    cout << "How many test scores does each student have? "; 
    cin >> numTests; 

    //Get the number of test scores per student .
    for (int student = 1 ; student <= numStudents; student++)
    {
        total = 0 ;  // Initilize the accumulator .
        for (int test = 1 ; test <= numTests; test++)
        {
            double score ;
            cout << " Enter score "<< test << "for ";
            cout << "student "<< student <<":";
            cin >> score;
            total +=score ;

        }
        average = total/ numTests;
        cout << "The aveage score for student "<< student ;
        cout << "is "<< average << ".\n\n";   
        }
        return 0;
}




