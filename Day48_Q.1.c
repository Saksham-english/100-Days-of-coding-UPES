#include<stdio.h> 
#include<string.h> 
int main()
{ char s1[155],s2[155],temp[155];
     printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    // Step 1: if lengths differ → can,t have rotation 
    if (strlen(s1) != strlen(s2)) {
        printf("Not rotation\n");
        return 0;
    }

    // Step 2 Makeing  temp = s1 + s1
    strcpy(temp, s1);
    strcat(temp, s1); //to join to string 

    // Step 3: check if s2 is inside temp
    if (strstr(temp, s2) != NULL) // to find a substring inside another string 
        printf("Rotation\n");
    else
        printf("Not rotation\n");

    return 0;
}