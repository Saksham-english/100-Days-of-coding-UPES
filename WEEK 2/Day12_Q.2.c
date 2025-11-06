#include <stdio.h>

int main() {
    int units;
    float bill = 0;

    // Input number of units consumed
    printf("Enter the number of electricity units consumed: ");
    scanf("%d", &units);

    // Calculate bill based on units
    if (units <= 0) {
        printf("Invalid input! Units must be greater than zero.\n");
    }
    else if (units <= 100) {
        bill = units * 5;
    }
    else if (units <= 200) {
        bill = (100 * 5) + (units - 100) * 7;
    }
    else if (units <= 300) {
        bill = (100 * 5) + (100 * 7) + (units - 200) * 10;
    }
    else {
        bill = (100 * 5) + (100 * 7) + (100 * 10) + (units - 300) * 12;
    }

    // Display final bill
    if (units > 0)
        printf("Total Electricity Bill = ₹%.2f\n", bill);

    return 0;
}

