#include <stdio.h>


int main(){
    float celsius = 0.0f;
    float kelvin = 0.0f;
    char choice = '\0';

    printf("Temperature Conversion Program!\n");
    printf("C. Celsius to Kelvin\nF. Kelvin to Celsius\n");
    printf("Is the temperature in Celsius (C) or Kelvin (K)? (Type in Capital Letters): ");
    scanf("%c", &choice);
    getchar();

    if(choice=='C'){
        printf("Enter the temperature in Celsius: ");
        scanf("%f", &celsius);
        kelvin = celsius+273.15;
        printf("Your temperature is %f K", kelvin);
    }
    else if(choice=='K'){
        printf("Enter the temperature in Kelvin: ");
        scanf("%f", &kelvin);
        celsius=kelvin-273.15;
        printf("Your temperature is %f C", celsius);
    }
    else{
        printf("Invalid choice!");
    }


    return 0;
}