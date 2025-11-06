#include <stdio.h>
int main()
{
    float c, fh;

    printf("enter temprature in centigrate\n");
    scanf("%f", &c);

    fh= (c * 1.8) + 32;

    printf("temprature in farenheit is %f\n",fh);

    return 0;
}