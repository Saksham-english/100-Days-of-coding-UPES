#include<stdio.h> //to count number of frequency of the given character 
int main()
{  int ch ,freq=0;
    char str[100];
    printf("Enter the string");
    scanf("%[^\n]",str);

    printf("Enter the character of which frequency you want ");
    scanf(" %c",ch); //i give space to remove the left over lines from last scanf 

    for(int i=0; str[i]!='\0';i++)
    { if(str[i]==ch)
        freq++;
    }
    printf("no of freq of %c is %d ",ch,freq);
    return 0 ; 
}