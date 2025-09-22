/* File name: chpt3ex6.cpp 
* Programmer: Luis Huerta
* Date: September 21, 2025
* Requirements: Create a program that will ask for user inputs based on how many cookies he or she wants to make.
* Additionally, display the number of cups of each ingredient is needed for a specific number of cookies. 
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()

{
    // Standard ingredients measured in cups required to make a single cookie
    const double Sugar = 1.5;
    const double Butter = 1.0;
    const double Flour = 2.75;

    const int base_Cookies = 48;

    int cookiesWanted;

    // User inputs based on how many cookies they want

    cout << " How many cookies would you like to create? ";
    cin >> cookiesWanted;

    // Ratio calculations

    double ratio = static_cast <double> (cookiesWanted) / base_Cookies;

    // Ingredient calculations

    double sugarRequired = Sugar * ratio;
    double butterRequired = Butter * ratio;
    double flourRequired = Flour * ratio;

    // Rounding

    int sugarRounded = static_cast<int>(round(sugarRequired));
    int butterRounded = static_cast<int>(round(butterRequired));
    int flourRounded = static_cast<int>(round(flourRequired));

    // Results

       cout << "\nTo make " << cookiesWanted << " cookies, you will need:\n";
    cout << sugarRounded << " cups of sugar\n";
    cout << butterRounded << " cups of butter\n";
    cout << flourRounded << " cups of flour\n";







    
}

