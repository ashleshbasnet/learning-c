#include <stdio.h>
#include <stdbool.h>


int main(){

    // logical operators = used to combine or modify boolean expressions!

    // && = AND
    // || = OR
    // ! = NOT

    int temp = 25;


    if(temp>0){
        // printf("The temperature is GOOD\n");
    }
    else if(temp<30){
        // printf("The temperature is GOOD\n"); //This code has a lot of problems!!!
        //                                   if we set our temperature to 100 degress, it will still say temp is good
        //                                   because technically the temperature is always greater than 0!
        //                                   Hence, we need to use the logical operators!!!
    }
    else{
        // printf("The temperature is BAD\n");
    }


    if(temp>0 && temp<30){ //BOTH THE CONDITIONS MUST BE TRUE
        printf("The temperature is GOOD\n");
    }
    // ALSO
    if(temp<=0 || temp>=30){ // One of the conditions must be true
        printf("The temperature is BAD\n");
    }

    bool isSunny=true;

    if(!isSunny){ //the ! will invert the input
        printf("It's not sunny\n");
    }

    if(!(temp>0 && temp<30)){
        printf("The temperature is BAD\n");
    }


    return 0;
}