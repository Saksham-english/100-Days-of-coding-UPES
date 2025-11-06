#include<stdio.h> //Write a program to print the reverse of a number.
int main()
{int n,remainder, reversed=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n!=0)
    {  remainder=n%10;
       reversed=reversed*10+remainder;
       n/=10;
    }
    printf("Reversed Number is : %d",reversed);
    return 0; 
}