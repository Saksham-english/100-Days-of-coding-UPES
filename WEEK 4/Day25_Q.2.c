#include<stdio.h> //Write a program to print the following pattern
int main()
{int i,j,s;
    for(i=5;i>=1;i--)
    {for(s=1;s<i;s++){
        printf(" ");
    }
    for(j=i;j<=5;j++)
    {
        printf("%d ",j);
    }
    printf("\n");
}
    return 0;
}