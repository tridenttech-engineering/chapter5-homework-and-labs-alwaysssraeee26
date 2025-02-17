#include <iostream>
#include <iomanip>
using namespace std;

// Constants for discount rates and shipping charges
const float DISCOUNT_MEMBER = 0.10;     // 10% discount for members
const float DISCOUNT_NON_MEMBER = 0.05; // 5% discount for non-members
const float SHIP_CHG1 = 0.99;           // Shipping charge for discounted amount < $50
const float SHIP_CHG2 = 4.99;           // Shipping charge for discounted amount >= $50

int main() {
    float amountOwed; // Original amount owed
    char memberStatus; // Membership status (Y/N)

    // Input amount owed
    cin >> amountOwed;

    // Input membership status
    cin >> memberStatus;

    // Determine the discount rate
    float discountRate = (memberStatus == 'Y' || memberStatus == 'y') ? DISCOUNT_MEMBER : DISCOUNT_NON_MEMBER;

    // Apply the discount
    float discountedAmount = amountOwed * (1 - discountRate);

    // Determine the shipping charge
    float shippingCharge = (discountedAmount < 50.0) ? SHIP_CHG1 : SHIP_CHG2;

    // Calculate the total amount
    float totalAmount = discountedAmount + shippingCharge;

    // Output only the total amount, formatted to two decimal places
    cout << fixed << setprecision(2) << totalAmount << endl;

    return 0;
}
