// hw5-12.cpp - displays the total owed
// Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Declare variables to hold the prices of the items
    float price1, price2, total;

    // Get the prices of two items
    cout << "Enter the price of item 1: ";
    cin >> price1;
    cout << "Enter the price of item 2: ";
    cin >> price2;

    // Apply Buy One, Get One Half Off on the lower price
    if (price1 > price2) {
        total = price1 + price2 / 2;
    } else {
        total = price1 / 2 + price2;
    }

    // Display the total amount owed, formatted to 2 decimal places
    cout << fixed << setprecision(2) << "Total amount owed: $" << total << endl;

    return 0;
} // end of main function
