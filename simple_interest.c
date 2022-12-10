#include <stdio.h>

void main()
{
    int principle,rate,time;
    printf("enter the principle,rate and time period respectively - ");
    scanf("%d %d %d", &principle, &rate, &time);
    printf("the simple interest will be - %d", (principle*rate*time)/100);

}