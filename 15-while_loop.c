#include <stdio.h>

int main(){

    // while loop = Continue some code WHILE the condition remains true
    //              Condition must be true for us to enter while loop

    int number = 0;

    while(number <= 0){
        printf("Enter a number greater than 0: ");
        scanf("%d", &number); // Keeps continuing forever until we do a false statement!
        //                       Here it's a positive number
    }

    return 0;
}