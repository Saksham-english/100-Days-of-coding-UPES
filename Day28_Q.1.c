#include<stdio.h> //Write a program to check if a number is prime or not.
int main()
{ int n,prime;
    printf("Enter a number:");
    scanf("%d",&n);

    prime=1; //Assuming number is prime

    if(n<=1)
    {
        prime=0; //Numbers less than or equal to 1 are not prime
    }
    else
    {
        for(int i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                prime=0; //Number is not prime
                break;
            }
        }
    }

    if(prime)
        printf("%d is a prime number.\n",n);
    else
        printf("%d is not a prime number.\n",n);

    return 0;
}