#include<stdio.h> 

int main()
{ float radius, area , circumfrence ;
 printf("enter the radius of circle \n");
  scanf("%f", &radius);
  area=3.14*radius*radius;
  circumfrence=2*3.14*radius;
    printf("area of circle is %f\n",area);
    printf("circumfrence of circle is %f\n",circumfrence);
    return 0;

}