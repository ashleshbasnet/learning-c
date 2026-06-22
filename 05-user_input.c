#include <stdio.h>

int main(){

    int age; // Since we're not specifying a value, the whole variable can lead to undefined bhavior
    //          which means that it may conflict with stuff we have in our memory from previous programs.
    //          It's fine to declare variables and not assign values, 
    //             just be sure to not use them before assigning a value
    char name[30]; //While declaring strings, you must assign a size for it to store,
    //               you will get an error if you don't specify a size

    // So its best practice to declare a default value for the variables. I.E int age = 0;
    float gpa = 0.0f; //The f stands for float, which tells you and other programmers that the variable gpa
    //                  should be used as a float and not an integer, you don't need this for double
    char grade = '\0'; // the '\0' stands for a null terminator. Kind of a default fallback thingy.

    /*==========
      USER INPUT
      ==========*/ //\t is used for inserting a tab
    printf("Input your age:"); //A prompt, in python and many other languages, this is done by a single operation
    scanf("%d", &age); //Scans for user input and stores it into variable age, & stands for assignment operator
    printf("Input your gpa:");
    scanf("%f", &gpa);
    printf("Input your Grade (A, B):");
    scanf("%c", &grade);
    printf("\n"); //In order to create a new line, just makes the terminal output look nicer.
    printf("Your age is %d, and you have a grade of %.2f with grade %c\n\n", age, gpa, grade);
    printf("UPDATED CODE\n");
    // When running this batch of code from line 20 to 27, you will encounter an error
    // This error is that you won't get an opportunity to input a value for something
    // This stems from the fact that after we enter a value, theres a new line character within a new line buffer
    // So the program picked up the new line (\n) and sent it to the input.
    // An easy fix is just to add a space before the % sign in the scanf, so to tell our C program to skip the new line thingy

    // UPDATED CODE
    printf("Input your age:");
    scanf(" %d", &age);
    printf("Input your gpa:");
    scanf(" %f", &gpa);
    printf("Input your Grade (A, B):");
    scanf(" %c", &grade);
    printf("\n");

    printf("Your age is %d, and you have a grade of %.2f with grade %c\n\n", age, gpa, grade);


    /*=================
      STRING USER INPUT
      =================*/

    //printf("scanf String Input: \n");
    //printf("Input your full name:");
    //scanf(" %s", &name); // Seems normal right? But scanf hosts a huge problem for string data.
    //printf("Your name is %s\n\n", name); // After scanf encounters a white space, it stops scanning for any other user input
    // So if you were to type in your full name, only your first name would show
    // Therefore in order to tackle this problem we use another function instead of scanf!


    getchar();
    printf("scanf fix: fgets\n");
    printf("Input your full name: ");
    fgets(name, sizeof(name), stdin);
    printf("Your name is %s", name);
    // A lot of new stuff to unpack here,
    // fgets in stands for file get string
    // Within the (), we have to change some stuff
    // The new syntax is fgets(variable, variablesize, stdin)
    // stdin stands for standard input
    // variable size should be the same as the one we set up while declaring the string variable
    // Since we need to manually make sure that the size of variable and the passed value in fgets
    // should be same, we can just use the sizeof() function to find the size of name, the program doing it
    // automatically for us!
    // As for the getchar(); function, that is something that we use to clear the input buffer
    // we don't have the luxury of adding in a space before the % as we did before so we use getchar();

    // What if we add in the name at the first before printing others?
    printf("%s\n", name);
    printf("%d\n", age);
    printf("%f\n", gpa);
    printf("%c\n\n", grade);
    // As you can see, the fgets function took our enter as the input as well, adding a space between the different outputs
    // To tackle this problem, though early, we must take help of a header file called string.h

    #include <string.h> //Only here for reference, should always be at top of source file!!!
    printf("Corrected Output Using string.h\n");
    printf("Input your full name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] ='\0'; //What this does is really simple
    // We are taking our name variable, and then turning the last thing in that variable (\n) and turning
    // that into a null terminator, so we will have our output fixed!
    printf("%s\n", name);
    printf("%d\n", age);
    printf("%f\n", gpa);
    printf("%c\n", grade);



    return 0;
}