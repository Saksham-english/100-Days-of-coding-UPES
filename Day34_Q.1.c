#include<stdio.h> // Write a program to insert an element at a given position in an array
int main()
{int n,pos,element;
    printf("Enter the number of elemnts : ");
    scanf("%d",&n);
    int  arr[n+1];
    
    printf("Enter %d elemnts :\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the position to be inserted (0 to %d):",n);
    scanf("%d", &pos);
    printf("Enter the elemnt to be inserted:");
    scanf("%d", &element);

    int i =n-1 ;
    while(i>=pos-1)
    {arr[i+1]=arr[i];
        i--;
    }
    
    arr[pos-1]=element;
    n++ ;
    printf("the new array after insertion : \n");
    for(int j=0;j<n;j++)
    {
        printf("%d ",arr[j]);
    }
 return 0  ;
}