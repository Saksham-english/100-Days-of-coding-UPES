#include <stdio.h> //Write a program to swap first and last digit of a number.
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits, swappedNum;

    printf("Enter a number: ");
    scanf("%d", &num);

    lastDigit = num % 10;  // Get last digit

    // Find total number of digits
    digits = (int)log10(num);

    // Get first digit
    firstDigit = num / pow(10, digits);

    // Remove first and last digits and store the middle part
    int middle = num % (int)pow(10, digits);
    middle = middle / 10;

    // Form new number after swapping
    swappedNum = lastDigit * pow(10, digits) + middle * 10 + firstDigit;

    printf("Number after swapping first and last digit: %d\n", swappedNum);

    return 0;
}
