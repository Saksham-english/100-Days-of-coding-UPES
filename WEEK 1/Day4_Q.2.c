#include<stdio.h> 
int main()
{ int n, sum;
    printf("enter a natural number\n");
    scanf("%d",&n);
    sum=n*(n+1)/2;
    printf("sum of first %d natural number is %d\n",n,sum);
    return 0;
}