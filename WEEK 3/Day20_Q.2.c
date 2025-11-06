#include <stdio.h> //Write a program to find 1's complement of a binary number.

int main() {
    char binary[100];
    int i;

    printf("Enter a binary number: ");
    scanf("%s", binary);  // Read binary number as string

    // Find 1's complement
    for (i = 0; binary[i] != '\0'; i++) {
        if (binary[i] == '0')
            binary[i] = '1';
        else if (binary[i] == '1')
            binary[i] = '0';
        else {
            printf("Invalid binary number!\n");
            return 0;
        }
    }

    printf("1's Complement = %s\n", binary);

    return 0;
}
