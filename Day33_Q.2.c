#include<stdio.h> // Write a program to insert an element in a sorted array
int main()
{int n , element ;
    printf("Enter the number of elemnts : ");
    scanf("%d",&n);
    int  arr[n+1];
    
    printf("Enter %d elemnts (sorted):\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the elemnt to be inserted:");
    scanf("%d", &element);

    int i =n-1 ;
    while(i>=0 && arr[i]>element)
    {
        arr[i+1]=arr[i];
        i--;
    }
    arr[i+1]=element;
    n++ ;
    printf("the new array after insertion : \n");
    for(int j=0;j<n;j++)
    {
        printf("%d ",arr[j]);
    }
 return 0  ; 
}
