#include<stdio.h>
#include<conio.h>
char player1,player2,cont;

void main(){

   do{

        printf("Welcome to Rock, Paper and Scissors! Please press enter to continue to the game!");
        getch();
        printf("\nPlayer 1 please choose r for rock, p for paper or s for scissors:  ");
        scanf(" %c",&player1);
        printf("Player 2 please choose r for rock, p for paper or s for scissors:  ");
        scanf(" %c",&player2);

        if(player1=='r'){
            if(player2=='s')
            printf("Player 1 wins!");
            else if(player2=='r')
            printf("It is a draw");
            else if(player2=='p')
            printf("Player 2 wins!");
            else
            printf("Invalid Input");
        }

        else if(player1=='p'){
            if(player2=='s')
            printf("Player 2 wins!");
            else if(player2=='p')
            printf("It is a draw");
            else
            printf("Invalid Input");
        }

        else if(player2=='s'){
            if(player2=='s')
            printf("It is a draw");
            else
            printf("Invalid Input");
        }

        else{
            printf("Invalid Input");
        }

        printf("\nI hope you enjoyed the game! Please press y to play again : ");
        scanf(" %c",&cont);

    } while(cont=='y');

}