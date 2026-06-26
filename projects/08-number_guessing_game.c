#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


int randomNumberGenerator(int min, int max);
bool guessingGame(int guess, int generated);

int main(){

    srand(time(NULL));

    int num1 = 0;
    int num2 = 0;
    int guessed = 0;

    printf("WELCOME TO THE NUMBER GUESSING GAME!!!\n");
    printf("Enter the minimum number boundary: ");
    scanf("%d", &num1);
    printf("Enter the maximum number boundary: ");
    scanf("%d", &num2);

    bool hasWon=false;
    int c = 10;
    int numberGenerated = randomNumberGenerator(num1, num2);
    do{
        printf("Enter your guess Number! \nTries Remaining: %d\n", c);
        printf("Guess Number: ");
        scanf("%d", &guessed);
        hasWon = guessingGame(guessed, numberGenerated);
        c--;
    } while(!hasWon && c!=0);
    if(hasWon){
        printf("You have guessed correctly! Congratulations!!");
    }


    return 0;
}

int randomNumberGenerator(int min, int max){
    
    int randomNumber= (rand()%(max-min+1))+min;
    return randomNumber;
}

bool guessingGame(int guess, int generated){
    if(guess==generated){
        return true;
    }
    else{
        return false;
    }
}