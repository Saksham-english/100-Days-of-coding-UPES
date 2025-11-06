#include<stdio.h> //Write a program to print the following pattern
int main()
{ for( int i=1;i<=4;i++)
    { for(int s = 1; s <= 4 - i; s++) {
            printf(" ");
        }
        // Print stars
        for(int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower inverted pyramid
    for(int i = 3; i >= 1; i--) {
        // Print spaces
        for(int s = 1; s <= 4 - i; s++) {
            printf(" ");
        }
        // Print stars
        for(int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
       return 0;
    }
