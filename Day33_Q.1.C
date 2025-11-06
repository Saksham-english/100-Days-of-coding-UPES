#include<stdio.h> // Write a program to perform binary search in a sorted array
int main(){
    int n , key;
    printf("Enter the number of elements:");
    scanf("%d",&n);

    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
     printf("Enter element to search : ");
     scanf("%d",&key );

    int  low=0;
    int  high=n-1 ;
    
    while(low<=high)
    {int  mid =low+high/2;
        if(arr[mid] == key) {
            printf("Element found at index %d\n", mid);
            return 0;
        }
        else if(arr[mid] > key) {
            high = mid - 1;  // search left half
        }
        else {
            low = mid + 1;   // search right half
        }
    }

    printf("Element not found.\n");
    return 0;
     

    }
    

    
