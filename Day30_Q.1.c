#include<stdio.h> //Write a program to count even and odd numbers in an array
int main()
{int n , even=0,odd=0 ; 
    printf("Enter the number of elements :");
    scanf("%d",&n);

    int arr[n];

    printf("enter %d elements: \n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even numbers = %d\n", even);
    printf("Odd numbers = %d\n", odd);

    return 0;
}
