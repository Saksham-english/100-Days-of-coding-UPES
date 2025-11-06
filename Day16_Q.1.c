#include <stdio.h>

int main() {
    int n, binary[32], i = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    // Convert to binary
    while (n > 0) {
        binary[i] = n % 2;  // store remainder (0 or 1)
        n = n / 2;          // divide number by 2
        i++;
    }

    printf("Binary: ");
    // Print binary digits in reverse order
    for (i = i - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}
