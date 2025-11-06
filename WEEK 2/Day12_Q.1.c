#include <stdio.h> //program to calculate library fine .

int main() {
    int days;
    float fine = 0;

    // Input number of late days
    printf("Enter the number of days the book is returned late: ");
    scanf("%d", &days);

    // Calculate fine based on late days
    if (days <= 0) {
        printf("No fine. Book returned on time!\n");
    }
    else if (days <= 5) {
        fine = days * 2;
        printf("Fine = ₹%.2f\n", fine);
    }
    else if (days <= 10) {
        fine = (5 * 2) + (days - 5) * 4;
        printf("Fine = ₹%.2f\n", fine);
    }
    else if (days <= 30) {
        fine = (5 * 2) + (5 * 4) + (days - 10) * 6;
        printf("Fine = ₹%.2f\n", fine);
    }
    else {
        printf("Membership Cancelled!\n");
    }

    return 0;
}
