#include <stdio.h> 
int main()
{int year ;
    printf("enter a year :");
    scanf("%i", &year);

 if(year % 400 == 0 )
 {printf("%i is a leap year \n ", year);

 } else if (year %100 == 0 )
 {printf(" %i is not a leap year \n", year);
 }
 else if(year % 4 == 0)
 {printf(" %i is a leap year \n", year );
 }
 else
 {printf("%i is not a leap year ");
 }

}