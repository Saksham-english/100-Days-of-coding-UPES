#include<stdio.h> //Write a program to read and print elements of an array.
int main()
{ int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Reading array elements
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Printing array elements
    printf("You entered:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    

}