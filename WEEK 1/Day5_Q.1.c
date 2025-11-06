#include <stdio.h>
#include <math.h>   // for pow() function

int main() {
    float principal, rate, time, simpleInterest, compoundInterest, amount;

    
    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    
    simpleInterest = (principal * rate * time) / 100;

    
    amount = principal * pow((1 + rate / 100), time);
    compoundInterest = amount - principal;

    
    printf("\nSimple Interest = %.2f", simpleInterest);
    printf("\nCompound Interest = %.2f", compoundInterest);

    return 0;
}
