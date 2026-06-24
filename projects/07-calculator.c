#include <stdio.h>


int main(){
    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;
    char operator= '\0';


    printf("Enter the first number: ");
    scanf("%lf", &num1);

    
    printf("Enter the operator: ");
    getchar();
    scanf("%c", &operator);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    switch(operator){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1*num2;
            break;
        case '/':
            if(num2 == 0){ // NESTED IF STATEMENT!!!
                printf("You can't divide by 0\n");
            }
            else{
                result = num1/num2;
            }
            break;
        default:
            printf("Enter a valid operator!\n");

    }

    printf("Your result is: %.4lf", result);




    return 0;
}