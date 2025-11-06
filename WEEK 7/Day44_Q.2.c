#include<stdio.h> //Replace spaces with hyphens in a string.

int main()
{char str[100];
    printf("Enter the string ");
    scanf("%[^\n]",str );

    for(int i=0;str[i]!='\0';i++)
    { if(str[i] == ' ') {
            str[i] = '-';   // replacing space with hyphen
        }
    }

    printf("Modified string: %s\n", str);

 }
 
