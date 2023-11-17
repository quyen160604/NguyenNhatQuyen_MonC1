//This program user an array of ten charactesr to stoer the
// first ten letters of the alphabet. The ASCII codes of the 
// characters are diaplayed.
#include <iostream> 
using namespace std;
int main ()
{
    const int NUM_LETTERS = 10;
    char letters[NUM_LETTERS]={'A','B','C','D','E',
                               'F','G','H','I','J'};

    cout << "character" << "\t" << "ASCII code \n";
    cout <<"___________" <<"\t" <<"_______________\n";
    for (int count = 0 ; count <NUM_LETTERS;count++ )
    {
        cout << letters[count] << "\t\t";
        cout << static_cast<int>(letters[count]) << endl;  
    }   
    return 0 ;                      
}