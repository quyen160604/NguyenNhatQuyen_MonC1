// This program writes data to a file .
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outputFile;
    outputFile.open("demofile.txt");

    cout << "Now writing data to teh file.\n" ;
    // Write four names t the file .
    outputFile << "Bach\n";
    outputFile << "Beethoven\n";
    outputFile << "Mozart\n";
    outputFile << "Schhubert\n ";

    // Close the file
    outputFile.close();
    cout << "Done.\n";
    return 0;    

}