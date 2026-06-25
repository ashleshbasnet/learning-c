#include <stdio.h>
#include <stdbool.h>


int main(){

    // while loop = Continue some code WHILE the condition remains true
    //              Condition must be true for us to enter while loop

    int number = 0;

    while(number <= 0){
        printf("Enter a number greater than 0: ");
        scanf(" %d", &number); // Keeps continuing forever until we do a false statement!
        //                       Here it's a positive number
    }

    do{
        printf("Enter a number greater than 0: ");
        scanf(" %d",&number);
    }while(number<=0); //Post conditional while loop


    bool isRunning = true;
    char response = '\0';

    while(isRunning){
        printf("You are playing a game\n");
        printf("Would you like to continue? (Y = yes, N = no): ");
        scanf(" %c", &response);

        if (response !='Y' && response !='y'){
            isRunning=false; //You may also set isRunning to false, do note that break exists INSTANTLY
            //       If you have stuff below this then DON'T USE BREAK!!!!!
        }
    }


    return 0;
}