#include <iostream>
#include <iomanip>
#include <cctype>  // For tolower()
using namespace std;

// Constants for discount rates and shipping charges
const float DISCOUNT_MEMBER = 0.10;     // 10% discount for members
const float DISCOUNT_NON_MEMBER = 0.05; // 5% discount for non-members
const float SHIP_CHG1 = 0.99;           // Shipping charge for discounted amount < $50
const float SHIP_CHG2 = 4.99;           // Shipping charge for discounted amount >= $50

int main() {
    float amountOwed;
    char memberStatus;

    // Input amountOwed
    cin >> amountOwed;

    // Input membership status
    cin >> memberStatus;
    memberStatus = tolower(memberStatus); // Convert to lowercase for consistency

    // Determine the discount rate
    float discountRate = (memberStatus == 'y') ? DISCOUNT_MEMBER : DISCOUNT_NON_MEMBER;

    // Apply the discount
    float discountedAmount = amountOwed * (1 - discountRate);

    // **Ensure proper rounding before applying shipping charge**
    discountedAmount = round(discountedAmount * 100) / 100; 

    // Determine the shipping charge **after rounding**
    float shippingCharge = (discountedAmount >= 50.0) ? SHIP_CHG2 : SHIP_CHG1;

    // Calculate the total amount
    float totalAmount = discountedAmount + shippingCharge;

    // Output the final amount formatted to exactly two decimal places
    cout << fixed << setprecision(2) << totalAmount << endl;

    return 0;
}
