#include <stdio.h.>
int main() {
    int n=5;
    for(int i = 1; i <= 5; i++) {
        for(int j = 0; j <= i-1; j++) { 
            printf("%i",n);
            n++;
        }
        n--;
        printf("\n");
    }

    return 0;
}