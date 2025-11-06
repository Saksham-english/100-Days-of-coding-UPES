#include <stdio.h> //Write a program to print the product of even numbers from 1 to n.
int main() {
    int i,n, sum=0;
    printf("Enter the values of n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
         if(i % 2==0){
            sum=sum*i;
         }
    }
    printf("sum of even numbers from 1 to %d = %lld\n", n, sum);
    return 0;

}