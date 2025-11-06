#include <stdio.h>

int main() {
    for (int i = 5; i >= 1; i--) {
        // Print spaces
        for (int s = 1; s < i; s++) {
            printf(" ");
        }
        // Print numbers
        for (int j = i; j <= 5; j++) {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
