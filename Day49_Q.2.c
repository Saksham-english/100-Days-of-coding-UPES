#include <stdio.h> //print initials of a name with surname displayed in full 

int main() {
    char name[100];
    int i;

    printf("Enter your full name:\n");
    scanf("%[^\n]", name);   // read full name


    printf("%c", name[0]);

    //  Find where the surname starts (find last space)
    int lastSpace = -1;
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            lastSpace = i;
        }
    }
    //printing intial of all 
    for (i = 1; i < lastSpace; i++) {
        if (name[i] == ' ') {
            printf("%c", name[i + 1]);
        }
    }

    // Print the surname fully
    printf(" %s", name + lastSpace + 1);

    return 0;
}
