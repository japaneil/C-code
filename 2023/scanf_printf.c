#include<stdio.h>
int x,y;
unsigned int z;
void main(){
    printf("Please enter number 1: ");
    scanf("%d",&x);
    printf("\nplease enter number 2: ");
    scanf("%d",&y);
    z=x+y;
    printf("The sum of the numbers you have entered is : %u",z);   
    
}