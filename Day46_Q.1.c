#include<stdio.h> //remove all vowels from a string 
int main()
{ int i,j=0 ;// initialise j 
    char str[100],result[100];
    printf("Enter the string ");
    scanf("%[^\n]",str);

    for(i=0;str[i]!='\0';i++)
    { char ch=str[i];
      if(!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
             ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
            result[j] = ch;   // copy only consonants
            j++;   }   
     } 
     result[j] = '\0';   // end the string

    printf("String without vowels: %s", result);

    return 0;


}

