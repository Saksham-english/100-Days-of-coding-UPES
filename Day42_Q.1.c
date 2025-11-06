#include <stdio.h> // counts vowels and consonant in string 

int main() {
    char str[155];
    int vowels = 0, consonants = 0;

    printf("Enter a sentence: ");
    scanf("%[^\n]s", str);   //used to read full ..

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Convert uppercase to lowercase
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        // Check alphabet only
        if (ch >= 'a' && ch <= 'z') {
            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
