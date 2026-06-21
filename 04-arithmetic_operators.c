#include <stdio.h>

int main(){

    // arithmetic operators are: + - * / % ++ --

    int x = 2;
    int y = 3;
    int z = 0; //Storage variable, we're gonna perform operations using x and y and store in z

    z = x + y;
    printf("Sum: %d\n", z);
    z = x - y;
    printf("Difference: %d\n", z);
    z = x*y;
    printf("Product: %d\n", z);
    z=x/y;
    printf("First Division: %d\n", z);
    // Here we can see that even though 2/3 is not equal to 0, we are getting that. For that we need to change z to float to store float

    float a = 0;
    a = x/y;
    printf("Second Division: %f\n",a); // We still got a 0, why?
    // That is because we are carrying out an integer division
    // While dividing x/y, if y is integer then an integer division is carried out 
    float b = 3;
    a = x/b;
    printf("Non-Integer FINAL Division: %f\n",a); //Problem fixed!


    z = y%x;
    printf("Modulus: %d\n", z); // Modulus prints the remainder of a division!!!

    /*=======================
      Increment and Decrement
      =======================*/

    x++; // Increments the value of x by 1
    printf("Incremented x: %d\n",x);
    x=2; // Resetting value of x
    x--; // Decrements the value of x by 1
    printf("Decremented x: %d\n", x);


    /*====================
      Augmented assignment
      ====================*/

    // Basically adding/subtracting a value from x and reassigning it back to x
    // Simply put its something like x=x+2, but in C we can do it in another way too!
    x = 10;
    x+=2; //Same as x=x+2
    printf("Reasiggned x: %d\n", x);
    // We can do this for every type of operator
    x*=2;
    printf("Reassigned multiplied x: %d\n", x);


    return 0;
}