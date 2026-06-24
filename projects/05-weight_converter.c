#include <stdio.h>


int main(){
    int choice = 0;
    float kilograms = 0.0f;
    float pounds = 0.0f;

    printf("Weight Conversion Calculator!\n");
    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    getchar();

    if(choice==1){
        printf("Enter the weight in Kilograms:");
        scanf("%f", &kilograms);
        getchar();
        pounds = kilograms * 2.20462;
        printf("Your weight in pounds is %f", pounds);
    }
    else if(choice==2){
        printf("Enter the weight in Pounds:");
        scanf("%f", &pounds);
        getchar();
        kilograms = pounds/2.20462;
        printf("Your weight in kilograms iss %f", kilograms);
    }
    else{
        printf("Invalid choice!");
    }


    return 0;
}