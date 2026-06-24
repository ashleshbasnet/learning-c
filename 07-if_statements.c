#include <stdio.h>
#include <stdbool.h>
#include <string.h>


int main(){

    int age = 70;

    if(age>=18){ //Really simple stuff! I won't explain much of this cus I know lots of it 
        //         already and it seems similar to what I've learnt
        printf("You are an adult."); // Dont forget the semi colons here!
    }

    else if(age>=65){
        printf("You are a senior"); // There is a flaw here, technically 70 is greater than 18 too
    }//                                 So the order of your conditions DOES matter!!
    //                                  Keep this statement at the top to get it working!!!

    else if(age<0){ // The parameter should be inside the brackets
        printf("You are still not born.");
    }
    else if (age==0){ // == is the assignment operator, its different from a single =
        //               If we use = here then C assumes we're trying to put the value 0 into age
        printf("You just got born!");
    }
    else{
        printf("You are a child"); //Basic decision making
    }
    


    bool isStudent=true;

    if(isStudent){ // You don't need to compare!! isStudent already holds true or false!
        printf("\nYou are a student");
    }
    else{
        printf("\nYou aren't a student");
    }

    char name[50]="";

    printf("\nEnter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name)-1] = '\0';


    if (strlen(name)==0){
        printf("You didn't input anything"); // Checking if the user inputted their name or not!
    }
    else {
        printf("Your name is %s", name);
    }
    return 0;
}