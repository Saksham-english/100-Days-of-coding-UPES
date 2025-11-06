#include <stdio.h> //Write a program to print the factorial of a number.
int main()
{int  i,n ;
 printf("enter the number :");
 scanf("%i",& n);

 long long fact =1;
 for(i=1;i<=n;i++){
    fact = fact * i;
   }
 
  printf("final factorial is %i", fact );

 return 0 ;
}