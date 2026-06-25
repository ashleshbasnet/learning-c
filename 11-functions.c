#include <stdio.h>
#include <string.h>


void happyBirthday(){ //This is a user defined function!!
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday to [name]!");
    printf("\nHappy birthday to you!");
    printf("\nYou are [age] years old\n");
}

void namedhappyBirthday(char birthdayboy[], int age){  //These are the things you use inside the function
    printf("\nHappy birthday to you!");//                the name from main is used as birthdayboy here!!
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday to %s!", birthdayboy);
    printf("\nHappy birthday to you!");
    printf("\nYou are %d years old\n", age);
}

int main(){

    // function = A reusable section of code that can be called
    //            using arguments that can be sent to use in the functions

    /*printf("\nHappy birthday to you!");
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday to [name]!");
    printf("\nHappy birthday to you!");
    printf("\nYou are [age] years old");*/ //Singing this three times, takes a lot of copy and pasting
    //                                     we can accomplish this, but its good practice to not repeat yourself

    // A function can help with that!

    happyBirthday(); // Calling a function! You NEED the ()!!
    /* happyBirthday();
    happyBirthday();*/ //Easily sing the happy birthday 3 times!

    //You can also add in names!!!!
    char name[50]="";
    int age = 0;


    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name)-1]='\0';

    printf("Enter your age: ");
    scanf(" %d", &age);

    namedhappyBirthday(name, age); //THESE ARE ARGUMENTS TO BE SENT TO THE FUNCTION
    //                               THE FUNCTION USES WHATEVER YOU TYPE INSIDE THE ()!!

    return 0;
}