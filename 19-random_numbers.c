#include <stdio.h>
#include <stdlib.h> //Standard Library
#include <time.h>

int main(){

    // Pesudo-random = Appear random but are determined by a 
    //                 mathematical formula that uses a seed value
    //                 to generate a predicatable sequence of numbers.
    //                 advanced: Mersenne Twister or /dev/random

    printf("%d", rand()); // PRINTS THE SAME NUMBER!! Because rand() is a seed value that
    //                       follows a base value, we haven't changed the base value
    //                       so rand prints the same output

    printf("\n");
    srand(time(NULL)); // Seeds the random number generator with a time(NULL)

    printf("%d\n", rand());
    printf("%d\n", RAND_MAX); // PRINTS THE MAXIMUM NUMBER YOUR RANDOM FUNCTION CAN PRINT!!!
    //                           DEPENDS ON YOUR OPERATING SYSTEM & COMPILER

    // GENERATING PSEUDO-RANDOM FUNCTIONS

    int randomNum1 = rand() % 2;
    printf("%d\n", randomNum1); //Only prints 0 or 1! We can offset by adding any integer to original formula

    int min = 50;
    int max = 100;

    int randomNum2 = (rand()%(max-min +1))+min; // MAIN FORMULA
    printf("%d\n", randomNum2);
    


    return 0;
}