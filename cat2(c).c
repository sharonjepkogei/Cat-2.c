#include <stdio.h>

int main() {
    int customerID, unitsConsumed;
    char customerName[50];
    float chargePerUnit, totalAmount;

    // Prompting user to enter customer details
    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    printf("Enter Customer Name: ");
    scanf("%s", customerName);
    printf("Enter Units Consumed: ");
    scanf("%d", &unitsConsumed);

    // Calculating charges per unit based on units consumed
    if (unitsConsumed <= 300) {
        chargePerUnit = 175;
    } else if (unitsConsumed > 300 && unitsConsumed < 600) {
        chargePerUnit = 200;
    } else if (unitsConsumed >= 600 && unitsConsumed < 800) {
        chargePerUnit = 300;
    } else {
        chargePerUnit = 400;
    }

    // Calculating total amount
    totalAmount = unitsConsumed * chargePerUnit;

    // Checking for surcharge
    if (totalAmount > 500) {
        totalAmount += totalAmount * 0.20; // 20% surcharge
    }

    // Ensuring minimum bill is 200
    if (totalAmount < 200) {
        totalAmount = 200;
    }

    // Displaying the output
    printf("\nCustomer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %d\n", unitsConsumed);
    printf("Charges per Unit: %.2f\n", chargePerUnit);
    printf("Total Amount to Pay: %.2f\n", totalAmount);

    return 0;
}