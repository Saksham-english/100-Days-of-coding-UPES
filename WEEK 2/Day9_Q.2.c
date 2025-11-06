#include<stdio.h>
int main()
{
    int percentage;
    printf("Enter percentage(0-100) :");
    scanf("%d",&percentage);
    if(percentage>=90 && percentage<=100)
        printf("Grade A");
    else if(percentage>=80 && percentage<90)
        printf("Grade B");
    else if(percentage>=70 && percentage<80)
        printf("Grade C");
    else if(percentage>=60 && percentage<70)
        printf("Grade D");
    else if(percentage>=50 && percentage<60)
        printf("Grade E");
    else if(percentage>=0 && percentage<50)
        printf("Grade F");
    else
        printf("Invalid Percentage");
    
}