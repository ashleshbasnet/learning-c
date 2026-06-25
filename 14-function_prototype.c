#include <stdio.h>
#include <stdbool.h>


void hello(char namep[], int age); //function prototype
// Basically in a nutshell, a prototype is a roadmap that allows us to put the functions below main() 
// without getting errors. The main function looks at hello() and finds it defined at the top as a 
// prototype, and so it executes even though the function is below main().

bool ageCheck(int age);


int main(){


    //function prototype = Provide the compiler with information about a function's:
    //                      name, return type, and parameters before its actual definition
    //                      Enables type checking and allows functions to be used before they're defined
    //                      Improves readability, organization, and helps prevent errors.

    hello("Spongebob", 30);

    if(ageCheck(30)){
        printf("You are old enough to work!");
    }
    else{
        printf("Grow older!");
    }

    return 0;
}


void hello(char name[], int age){
    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
}

bool ageCheck(int age){
    return age >=16;
}