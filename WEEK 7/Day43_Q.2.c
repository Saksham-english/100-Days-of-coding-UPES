#include <stdio.h> //to check if a string is palindrome 
#include <string.h>

int main() {
    char str[100], rev[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    strcpy(rev, str);

    strrev(rev);

    // Compare reversed string with original
    if (strcmp(str, rev) == 0)
        printf("The string is a palindrome.\n");
    else
        printf("The string is NOT a palindrome.\n");

    return 0;
