#include <stdio.h>
#include <stdbool.h>

int main(){
    const char d = '$';
    float price = 10.00;
    bool isStudent = true; //10 % discount
    bool isSenior = true; //20% discount

    // student = $9
    // senior = $8
    // senior + plus = $7
    
    if(isStudent){
        if(isSenior){ // This is called a nested conditional if statements
            printf("You get a student discount of 10%%\n"); //In order to safely type % in C 
            //                                                We do a double %
            printf("You get a senior discount of 20%%\n");
            price*=0.7;
        }
        else{
            printf("You get a student discount of 10%%\n");
            price*=0.9;
        }
    }
    else{
        if(isSenior){
            printf("You get a senior discount of 20%%\n");
            price*=0.8;
        }
    }

    //if(isSenior){
    //    printf("You get a senior discount of 20%");
    //    price*=0.8; // THIS is kinda true but we're supposed to get 7 dollars for senior + plus
    //}                  So we use nested ifs

    printf("The price of a ticket is %c%.2f",d, price);

    return 0;
}