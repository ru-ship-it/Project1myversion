// Description: My version with a bit of ChatGPT's help
// Name: Ruchel Paul
// Date: 09/15/23
//  Project 1 Computer science

#include <iostream>
using namespace std;


double GrowthRate(double birthRate, double deathRate) {
    return birthRate - deathRate;
}


double EstimatedPopulation(double currentPopulation, double birthRate, double deathRate) {
    return currentPopulation + (birthRate * currentPopulation / 100) - (deathRate * currentPopulation / 100);
}

int main() {
    double startingPopulation, birthRate, deathRate;
    int numYears;

   
    do {
        cout << "Enter the starting population: ";
        cin >> startingPopulation;

        if (startingPopulation < 2) {
            cout << "Invalid input. Population must be at least 2." << endl;
        }
    } while (startingPopulation < 2);

    do {
        cout << "Enter the birth rate (as a percentage): ";
        cin >> birthRate;

        if (birthRate < 0) {
            cout << "Invalid input. Birth rate must be non-negative." << endl;
        }
    } while (birthRate < 0);

    do {
        cout << "Enter the death rate (as a percentage): ";
        cin >> deathRate;

        if (deathRate < 0) {
            cout << "Invalid input. Death rate must be non-negative." << endl;
        }
    } while (deathRate < 0);

    cout << "Enter the number of years to project: ";
    cin >> numYears;

    
    for (int year = 1; year <= numYears; year++) {
        double growth = GrowthRate(birthRate, deathRate);
        startingPopulation = EstimatedPopulation(startingPopulation, birthRate, deathRate);

        cout << "Year " << year << ": Growth rate = " << growth << "%, Estimated Population = " << startingPopulation << endl;
    }

    return 0;
}

