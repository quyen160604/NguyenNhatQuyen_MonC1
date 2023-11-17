//This program averages 3 test scores .It repeats as
// many times as the user wishes.
#include <iostream>
using namespace std ;
 int main()
{
    int score1 , score2,score3; // Three scores
    double average;             // Average score
    char again;

    do 
    {
        // Get three scores.
        cout << "Enter 3 scores and I will average them : ";
        cin >> score1 >> score2 >>score3;

        // Calculate and display the average.
        average= (score1+ score2 + score3)/ 3.0;
        cout <<"Do you want to average anthor set? (Y/N) ";
        cin >> again ;
    }while (again == 'Y' || again =='Y') ;
    
    return 0 ;
   } 
