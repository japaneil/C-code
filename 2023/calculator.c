#include<stdio.h>
int type;
float x,y;
int main(){
    printf("Please enter number 1: ");
    scanf("%f",&x);
    printf("Please enter number 2: ");
    scanf("%f",&y);
    printf("Please enter what do you want to do with the numbers, insert 1 for multiplication, insert 2 for division, insert 3 for addition and insert 4 for subtraction: ");
    scanf("%d",&type);

    if(type==1){
        printf("The result is: %f",x*y);
    }
    else if(type==2){
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