#include<stdio.h> // Write a program to merge two array
int main()
{ int n1, n2 ;
    printf("Enter the number of elemnts :");
    scanf("%d",&n1);

    int arr1[n1];

    printf("Enter %d elements :\n",n1);
    for(int i=0;i<=n1;i++)
    {
        scanf("%d",&arr1[i]);
    }

    printf("Enter the elements of second array :");
    scanf("%d",&n2);

    int arr2[n2];

    printf("Enter %d elements :\n",n2);
    for(int i=0;i<=n2;i++)
    {
        scanf("%d",&arr2[i]);
    }

    int merged[n1 + n2];

    // Copy arr1 into merged
    for(int i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    // Copy arr2 into merged after arr1
    for(int i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }

    // Print merged array
    printf("Merged array:\n");
    for(int i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
    

