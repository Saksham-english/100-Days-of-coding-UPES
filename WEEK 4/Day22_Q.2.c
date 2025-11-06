//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms
#include<stdio.h>
int main()
{int n;
    float  numerator , denominator ,sum=0;

    printf("Enter the number");
    scanf("%d",&n);

    for(int i=1,j=4;i<=n*2;i+=2,j+=2)
    { float numerator = 2*i-1;
     float denominator =2*i;
        sum = sum + numerator/denominator;
    }
}