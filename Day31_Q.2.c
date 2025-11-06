#include<stdio.h> //Write a program to reverse an array
int main()
{int n ;
    printf("Enter the number of elements:");
    scanf("%d",&n);

    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int temp, start=0,end=n-1;
    while(start<end)
    { temp= arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    printf("Reversed array elemts are :\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}