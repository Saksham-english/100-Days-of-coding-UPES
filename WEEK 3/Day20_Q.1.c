#include <stdio.h> //Write a program to find the product of odd digits of a number

int main() {
    int num, digit, product = 1;
    int Odd = 0; // To check if there are any odd digits

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("No odd digits found.\n");
        return 0;
    }

    while (num != 0) {
        digit = num % 10; // Get last digit
        if (digit % 2 != 0) { // Check if odd
            product *= digit;
            Odd = 1;
        }
        num /= 10; // Remove last digit
    }

    if (Odd)
        printf("Product of odd digits = %d\n", product);
    else
        printf("No odd digits found.\n");

    return 0;
}
