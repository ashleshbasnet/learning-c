#include <stdio.h>
#include <string.h> // Required for efficient spring operations


int main(){

    char item_name[40] = ""; //Previous Exercise
    float price = 0.0f; //f represents float
    int quantity = 0;

    printf("What item would you like to buy?: ");
    fgets(item_name, sizeof(item_name), stdin); //fgets input
    item_name[strlen(item_name)-1]='\0'; // removes the \n at the end and replaces with \0
    
    printf("What is the price of each: ");
    scanf("%f", &price); // DO NOT FORGET THE & LIKE I DID :/

    printf("How many would you like?: ");
    scanf("%d", &quantity);


    printf("\n\n You have bought %d %s/s", quantity, item_name);
    float total = price * quantity;
    printf("\n The total is: $%.2f", total);




    return 0;
}