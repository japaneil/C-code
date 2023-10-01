#include<stdio.h>
#include<conio.h>
char type;
float x,y;
int main(){
    printf("Please enter number 1: ");
    scanf("%f",&x);
    printf("Please enter number 2: ");
    scanf("%f",&y);
    printf("Please enter what do you want to do with the numbers, insert m for multiplication, insert d for division, insert a for addition and insert s for subtraction: ");
    scanf(" %c",&type);

    if(type=='m'){
        printf("The result is: %f",x*y);
    }
    else if(type=='d' && y!=0){
        printf("The result is: %f",x/y);
    }
    else if(type=='a'){
        printf("The result is: %f",x+y);
    }
    else if(type=='s'){
        printf("The result is: %f",x-y);
    }
    else{
        printf("Invalid Input");
    }
}