#include <stdio.h>
#include <math.h>

// COMPOUND INTEREST CALCULATOR
int main(){

    double interest = 0.0;
    double amount = 0.0;
    double principal = 0.0;
    double rate = 0.0;
    double time = 0.0f;
    double number=0.0f;


    printf("Principal: ");
    scanf("%lf", &principal);
    getchar();

    printf("Rate (in %): ");
    scanf("%lf", &rate);
    rate = rate/100.0;
    getchar();


    printf("Number of times compounded per year: ");
    scanf("%lf", &number);
    getchar();

    printf("Time: ");
    scanf("%lf", &time);
    getchar();

    amount=principal*(pow((1+(rate/number)), (number*time)));
    interest = amount - principal;

    printf("Total Amount: %.2lf\n", amount);
    printf("Total Interest: %.2lf\n", interest);


    return 0;
}