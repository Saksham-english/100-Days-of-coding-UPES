#include <stdio.h> //Write a program to find LCM of two numbers.

int main() {
    int a, b, lcm, i;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Start checking from the greater number
    if (a > b)
        lcm = a;
    else
        lcm = b;

    // Use for loop to find LCM
    for (i = lcm; ; i++) {
        if (i % a == 0 && i % b == 0) {
            lcm = i;
            break;  // exit loop when LCM found
        }
    }

    printf("LCM of %d and %d is %d", a, b, lcm);

    return 0;
}
