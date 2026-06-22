#include <stdio.h>
#include <math.h>

int main(){

    double radius = 0.0;
    double area = 0.0;
    double surfaceArea=0.0;
    double volume = 0.0;
    const double PI = 3.1415926535;

    printf("Enter the radius (in meters): ");
    scanf(" %lf", &radius); //guess who forgot the & again!
    getchar();

    area = PI*pow(radius, 2);
    surfaceArea = 4*PI*pow(radius,2);
    volume = (4.0/3.0)*PI*pow(radius,3); // YOU NEED THE .0 OTHERWISE AN INT DIVISION OCCURS


    printf("\nArea: %.2lf sq. meter\n", area);
    printf("Surface Area: %.2lf sq. meter\n", surfaceArea);
    printf("Volume: %.2lf cu. meter\n", volume);


    return 0;
}