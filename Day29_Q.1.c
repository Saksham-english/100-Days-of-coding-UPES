#include<stdio.h> //Write a program to find sum of elements of an array
int main()
{ int n,sum=0;
    printf("Enter the no of elements : ");
    scanf("%d",&n);

    int arr[n];

    // Reading array elements
    printf("Enter %d elements :\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    // Calculating sum of array elements
    for(int i=0;i<n;i++)
    {
        sum+=+arr[i];
    }
   printf("Sum of array elements is %d",sum);
   return 0;
}