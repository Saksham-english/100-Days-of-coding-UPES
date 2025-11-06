#include <stdio.h>

int main() {
    int n, i, sum = 0;
    
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    // Sum of first n odd numbers
    for(i = 1; i <= n; i++) {
        sum += (2 * i - 1);  // Formula for i-th odd number
    }

    printf("Sum of first %d odd numbers = %d\n", n, sum);

    return 0;
}

