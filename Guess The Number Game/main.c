#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int userGuess;

    srand(time(NULL));

    int num = (rand() % 100) + 1;

    printf("Welcome to the Guess the Number Game!\n");
    printf("Please guess a number with no decimals: ");
    scanf("%d", &userGuess);


    while(1) {
        if(userGuess == num){
            printf("Congrats you won!");
            break;
        } else {
            printf("Incorrect, try again!\n");
            printf("Please guess a number with no decimals: ");
            scanf("%d", &userGuess);
        }
    }

    return 0;
}