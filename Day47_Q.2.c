#include <stdio.h> //to finging the longest word in a sentence .

int main() {
    char sentence[155];
    char longest[155];

    printf("Enter a sentence:\n");
    scanf("%[^\n]", sentence);   // reading  full sentence

    int max = 0, len = 0;
   //index were the current word starts 
    int pos = 0, longestPos = 0;

    for (int i = 0; ; i++) {
        if (sentence[i] != ' ' && sentence[i] != '\0') {
            len++;                 //  for counting letters
        } 
        else {
            if (len > max) {       
                max = len;
                longestPos = pos;  // starting index of that word
            }
            len = 0;               // reseting for next word
            pos = i + 1;           // next word starts after space

            if (sentence[i] == '\0') 
                break;             // end of string
        }
    }

    // Copying  the longest word into another array
    for (int i = 0; i < max; i++) {
        longest[i] = sentence[longestPos + i];
    }
    longest[max] = '\0';

    printf("Longest word: %s\n", longest);

    return 0;
}
