// hw5-13.cpp - calculates the total amount with discounts for Heaton Boutique
// Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
#include <cmath>  // For rounding
using namespace std;

int main() {
    // Declare variables for price, discount percentage, and membership status
    float price, discount, total;
    char memberStatus;

    // Get the price of the item
    cout << "Enter the price of the item: $";
    cin >> price;

    // Get the membership status (Y for Yes, N for No)
    cout << "Are you a member of the Premier Club (Y/N)? ";
    cin >> memberStatus;

    // Ensure the price is not negative
    if (price < 0) {
        cout << "Price cannot be negative." << endl;
        return 1; // Exit program if price is negative
    }

    // Determine the discount based on membership status
    if (memberStatus == 'Y' || memberStatus == 'y') {
        // 5% discount for Premier Club members
        discount = 0.05;
    } else {
        // 10% discount for non-members
        discount = 0.10;
    }

    // Calculate the total after applying the discount
    total = price - (price * discount);

    // Round the total to 2 decimal places
    total = round(total * 100) / 100.0;

    // Display the total amount owed, formatted to 2 decimal places
    cout << fixed << setprecision(2) << "Total amount owed: $" << total << endl;

    return 0;
} // end of main function
