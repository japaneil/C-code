#include<stdio.h>
char type;
float x,y;
int main(){
    printf("Please enter number 1: ");
    scanf("%f",&x);
    printf("Please enter number 2: ");
    scanf("%f",&y);
    printf("Please enter what do you want to do with the numbers, insert m for multiplication, insert d for division, insert a for addition and insert s for subtraction: ");
    scanf("%c",&type);

    if(type=="109"){
        printf("The result is: %f",x*y);
    }
    else if(type==""){
        printf("The result is: %f",x/y);
    }
    else if(type==3){
        printf("The result is: %f",x+y);
    }
    else if(type==4){
        printf("The result is: %f",x-y);
    }
    else{
        printf("Invalid Input");
    }
}