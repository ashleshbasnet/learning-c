#include <stdio.h>
#include <math.h> //Math header file which gives us math functions
#include <stdlib.h> // apparantly something we need to use stuff such as absolute functions


int main(){

    int x = 9;
    x = sqrt(9); //sqrt() gives square root
    printf("%d\n", x);
    x = pow(x,2); //pow(x, <power>) gives the base raised to a power
    printf("%d\n\n", x);

    float y = 2.71828;
    printf("%.2f\n", round(y)); // rounds the value of y
    printf("%.2f\n", ceil(y)); // always rounds up!
    printf("%.2f\n", floor(y)); //always rounds down
    printf("%.2f\n\n", log(y)); //gives the natural logarithm



    int z = -3;
    printf("%d\n", abs(z)); // gives the absolute value of z
    printf("%f\n", sin(z)); //gives the sin in radians, use cos() and tan() for respective ones

    
    return 0;
}