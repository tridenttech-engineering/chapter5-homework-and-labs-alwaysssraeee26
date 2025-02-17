//lab5-3.cpp - displays the total amount due
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	#include <stdio.h>
	#include <stdbool.h>

	#define DISCOUNT_MEMBER 0.10
	#define DISCOUNT_NON_MEMBER 0.05
	#define SHIP_CHG1 0.99
	#define SHIP_CHG2 4.99

	int main() {
			float amountOwed, discountRate, discountedAmount, totalAmount;
			char memberStatus;

			// Prompt user for amount owed and membership status
			printf("Enter the amount owed: ");
			scanf("%f", &amountOwed);

			printf("Is the customer a Premier Club member? (Y/N): ");
			scanf(" %c", &memberStatus);

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

			// Output results
			printf("Original Amount: %.2f\n", amountOwed);
			printf("Discount Rate: %.0f%%\n", discountRate * 100);
			printf("Discounted Amount: %.2f\n", discountedAmount);
			printf("Shipping Charge: %.2f\n", shippingCharge);
			printf("Total Amount: %.2f\n", totalAmount);

			return 0;
	}

	return 0;
}	//end of main function
