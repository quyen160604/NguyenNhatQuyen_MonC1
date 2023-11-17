//This program assists a technician in the process 
// of checking a substance's temperature. 
#include <iostream>
using namespace std;

int main()
{
    const double MAX_TEMP = 102.5 ; //Max mum temperature
    double temperature;

    // Get the current temprature.
    cout << "Enter the substance's Celsius temperature: ";
    cin >> temperature;

    // As long as necessary , instruct the technician
    // to adjust the thermostat.
     while (temperature > MAX_TEMP)
    {
        cout << "The temperature is too high . Turn the\n";
        cout << "themostat down and wait 5 minutes.\n";
        cout << "Then take the Celsius temperature again\n ";
        cout << "and enter it here: ";
        cin >> temperature;
    }
    // Remind the technicia to check the temperature
    // again in 15 minutes.
    cout << "The temperature is aceptable.\n";
    cout << "Check it again in 15 minutes .\n";

    return 0;

}

