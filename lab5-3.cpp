// lab5-3.cpp - Displays the total amount due
// Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>

using namespace std;

#define DISCOUNT_MEMBER 0.10
#define DISCOUNT_NON_MEMBER 0.05
#define SHIP_CHG1 0.99
#define SHIP_CHG2 4.99

int main() {
    float amountOwed, discountRate, discountedAmount, totalAmount;
    char memberStatus;

    // Prompt user for amount owed
    cout << "Enter the amount owed: ";
    cin >> amountOwed;

    // Prompt user for membership status
    cout << "Is the customer a Premier Club member? (Y/N): ";
    cin >> memberStatus;

    // Determine the discount rate
    if (memberStatus == 'Y' || memberStatus == 'y') {
        discountRate = DISCOUNT_MEMBER;
    } else {
        discountRate = DISCOUNT_NON_MEMBER;
    }

    // Apply the discount
    discountedAmount = amountOwed * (1 - discountRate);

    // Determine the shipping charge
    float shippingCharge = (discountedAmount < 50) ? SHIP_CHG1 : SHIP_CHG2;

    // Calculate the total amount
    totalAmount = discountedAmount + shippingCharge;

    // Output the results
    cout << fixed << setprecision(2); // Set decimal precision
    cout << "Original Amount: $" << amountOwed << endl;
    cout << "Discount Rate: " << discountRate * 100 << "%" << endl;
    cout << "Discounted Amount: $" << discountedAmount << endl;
    cout << "Shipping Charge: $" << shippingCharge << endl;
    cout << "Total Amount: $" << totalAmount << endl;

    return 0;
}
