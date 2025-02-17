// lab5-3.cpp - Displays the total amount due
// Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

const float DISCOUNT_MEMBER = 0.10;     // 10% discount for members
const float DISCOUNT_NON_MEMBER = 0.05; // 5% discount for non-members
const float SHIP_CHG1 = 0.99;           // Shipping charge if discounted amount < $50
const float SHIP_CHG2 = 4.99;           // Shipping charge if discounted amount >= $50

int main() {
    float amountOwed, discountRate, discountedAmount, totalAmount;
    char memberStatus;

    // Prompt user for amount owed
    cout << "Enter the amount owed: ";
    cin >> amountOwed;

    // Prompt user for membership status
    cout << "Is the customer a Premier Club member? (Y/N): ";
    cin >> memberStatus;

    // Validate membership status input
    if (memberStatus != 'Y' && memberStatus != 'y' && memberStatus != 'N' && memberStatus != 'n') {
        cout << "Invalid membership status. Please enter 'Y' or 'N'." << endl;
        return 1; // Exit program with error
    }

    // Determine the discount rate
    if (memberStatus == 'Y' || memberStatus == 'y') {
        discountRate = DISCOUNT_MEMBER;
    } else {
        discountRate = DISCOUNT_NON_MEMBER;
    }

    // Apply the discount
    discountedAmount = amountOwed * (1 - discountRate);

    // Determine the shipping charge
    float shippingCharge = (discountedAmount < 50.0) ? SHIP_CHG1 : SHIP_CHG2;

    // Calculate the total amount
    totalAmount = discountedAmount + shippingCharge;

    // Output the results
    cout << fixed << setprecision(2); // Set output precision to 2 decimal places
    cout << "Original Amount: $" << amountOwed << endl;
    cout << "Discount Rate: " << (discountRate * 100) << "%" << endl;
    cout << "Discounted Amount: $" << discountedAmount << endl;
    cout << "Shipping Charge: $" << shippingCharge << endl;
    cout << "Total Amount: $" << totalAmount << endl;

    return 0;
}
