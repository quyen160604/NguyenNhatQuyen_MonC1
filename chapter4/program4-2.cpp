//This program averages three test scores 
#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    const int HIGH_SCORE = 95;
    int score1, score2,score3;
    double average;

    //Get the three test score .
    cout << "Enter 3 test score and will average them: ";
    cin >> score1 >>score2 >> score3;

    //Calculate and display the average score .
    average = (score1 + score2 +score3 )/3.0;
    cout << "your average is "<< average << endl;

    //If the average is a high score , congratule the user.
    if (average > HIGH_SCORE)
    {
        cout << "congratulation ! that's a high score !\n";
    }
    return 0 ;

}