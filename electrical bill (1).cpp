#include <stdio.h>

// Function to calculate the total bill
float calculate_total_bill(int units) {
    float charge_per_unit, total_bill;

    // Determine the charge per unit based on units consumed
    if (units <= 199) {
        charge_per_unit = 1.20;
        total_bill = units * charge_per_unit;
    } else if (units >= 200 && units < 400) {
        charge_per_unit = 1.50;
        total_bill = units * charge_per_unit;
    } else if (units >= 400 && units < 600) {
        charge_per_unit = 1.80;
        total_bill = units * charge_per_unit;
    } else {
        charge_per_unit = 2.00;
        total_bill = units * charge_per_unit;
    }

    // Apply 15% surcharge if the bill exceeds 400 Ksh
    if (total_bill > 400) {
        total_bill += total_bill * 0.15;  // Add 15% surcharge
    }

    // Ensure the minimum bill is 100 Ksh
    if (total_bill < 100) {
        total_bill = 100;
    }

    return total_bill;
}

int main() {
    // Variable declaration
    int customer_ID, units;
    char customer_name[30];
    float total_bill;

    // Inputs
    printf("Enter your name: ");
    scanf("%29s", customer_name);

    printf("Enter your customer ID: ");
    scanf("%d", &customer_ID);

    printf("Enter the units consumed: ");
    scanf("%d", &units);

    // Call the function to calculate the total bill
    total_bill = calculate_total_bill(units);

    // Outputs
    printf("\nCustomer ID: %d\n", customer_ID);
    printf("Name: %s\n", customer_name);
    printf("You have consumed: %d units\n", units);
    printf("Total amount to pay: %.2f Ksh\n", total_bill);

    return 0;
}