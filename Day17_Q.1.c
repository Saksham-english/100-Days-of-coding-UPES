#include <stdio.h> //Write a program to check if a number is an Armstrong number.
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0;
    double result = 0.0;

    // Take input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    // Count number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // Compute sum of digits raised to the power n
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    // Check and display result
    if ((int)result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
