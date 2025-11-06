#include<stdio.h> //convert a lowercase string to uppercase without using built in function 
int main()
{ char str[200];
    printf("Enter the string :");
    scanf("%[^\n]",str);
    
    for(int i=0;str[i]!='\0';i++)
    { if(str[i]>= 'a' && str[i]<= 'z')
        { str[i]= str[i] -32 ;
        }
    }
  printf("uppercase %s\n",str);
}