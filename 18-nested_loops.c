#include <stdio.h>

// NESTED LOOPS = Loops inside loops
int main(){
/*
    for(int i = 1; i < 10; i++){
        printf("%d ", i);
    }
    printf("\n");

    for(int i = 1; i < 10; i++){
        printf("%d ", i);
    }
    printf("\n");

    for(int i = 1; i < 10; i++){
        printf("%d ", i);
    }
    printf("\n");// DOESNT FOLLOW THE DRY PRINCIPLE, DONT REPEAT YOURSELF! SO WE CAN USE NESTED LOOPS INSTEAD OF THIS
*/


    for(int i = 1; i<4; i++){ // OUTER LOOP, does the inside loop 3 times
        for(int j = 1; j < 10; j++){ // INNER LOOP, prints 1 to 9
            printf(" %d ", j);
        }
        printf("\n");
    }
    printf("\n MULTIPLICATION TABLE: \n");

    for(int i = 1; i <=10; i++){
        for(int j =1; j<=10; j++){
            printf(" %3d", i*j); //A MULTIPLICATION TABLE
        }
        printf("\n");
    }

    printf("\n Rectangle: \n");

    int rows = 0;
    int columns = 0;
    char symbol = '\0';

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);
    printf("Enter any symbol: ");
    scanf(" %c", &symbol);

    for(int i = 1; i<=rows; i++){
        for(int j = 1; j<=columns; j++){
            printf(" %c",symbol);
        }
        printf("\n");
    }


    return 0;
}