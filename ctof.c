#include <stdio.h>

void main()
{
    float celcius;
    printf("enter value in celcius - ");
    scanf("%f", &celcius);
    printf("%f F", (celcius*9/5)+32);
}