#include<stdio.h> // Write a program to right rotate an array by k positions
int main()
{
    int n, k;
    printf("Enter the number of elements :");
    scanf("%d",&n);

    int arr[n],temp[n];
    printf("Enter the %d elements \n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the value of how much you have to rotate :");
    scanf("%d",&k);

    k=k%n; // in case k is greater than n   

    for(int i=0;i<n;i++)
    {
        temp[(i+k)%n]=arr[i];
    }
    // copy temp back to arr
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }

    printf("Array after right rotation: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;

}