#include<stdio.h> //Write a program to print the following pattern
int main()
{ printf("*\n\n");
    
    for(int i=1;i<=4;i++)
    {printf("*\n");
    }
 printf("\n");

    // Group 3 (5 stars)
    for(int i = 1; i <= 5; i++) {
        printf("*\n");
    }
    printf("\n");

    // Group 4 (3 stars)
    for(int i = 1; i <= 3; i++) {
        printf("*\n");
    }
    printf("\n");

    // Group 5 (1 star)
    printf("*\n");

    return 0;
}
