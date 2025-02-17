#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char code;            // Variable to hold the user input for the code
    double purchase;      // Variable to hold the purchase price
    double serviceChg;    // Variable to hold the service charge

    // Prompt user for input
    cout << "Enter code (1, 2, or 3): ";
    cin >> code;  // Take character input for the code

    // Clear the input buffer to ensure there's no leftover newline character
    cin.ignore();

    cout << "Enter purchase price: ";
    cin >> purchase;  // Take the purchase price input

    // Calculate service charge (1% of the purchase price)
    serviceChg = purchase * 0.01;

    // If the code is '2', add an additional $5 to the service charge
    if (code == '2') {
        serviceChg += 5;  // Add $5 if the code is '2'
    }

    // Display the service charge with 2 decimal precision
    cout << fixed << setprecision(2);
    cout << "Service charge: " << serviceChg << endl;

    return 0;  // End of the program
}
