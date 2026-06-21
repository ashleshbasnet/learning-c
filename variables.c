#include <stdio.h>
#include <stdbool.h> //For BOOLEAN data type

int main(){
    //variable == A reusable container for storage of values
    //A variable behaves as if it were the value it contains
    //int = whole numbers (4 bytes)
    //float = single-precision decimal number (4 bytes)
    //double = double-precision decimal number (8 bytes)
    //char = single character (1 byte)
    //char[] = array of characters (size varies) (string in other languages)
    //bool = true or false, 1 or 0
    //all these are referenced in depth below

    /* ========
       INTEGERS  
       ========*/
    int age = 17; //The int data type creates a variable that stores whole values
    int year = 2026;
    int quantity = 1;

    printf("You are %d years old\n", age); 
    // The %d is a format specifier in C langauge. The d stands for decimal and is used to show where we are to print the int variable. 
    printf("It is currently %d\n", year);
    printf("You are buying %d number of products\n", quantity); 

    /* =====
       FLOAT
       =====*/

    float gpa = 4.0;
    float price = 19.99;
    float temperature = -10.1;
    
    printf("Your gpa is currently %f\n", gpa); // Floating numbers use %f as format specifier
    // Float usually prints 6 decimal places, in order to tell it how many dps you want
    // you can just add a .<number> before the f such as %.<number>f
    printf("Your total is $%.2f\n", price);
    printf("The current temperature is %.1f Degrees\n", temperature);


    /* =======
       DOUBLES
       =======*/
    // Double is basically the same as float, except its more precise and can store 16 dps
    // Float can mostly only store 6-7 digits

    double pi = 3.14159265358979;
    double e = 2.7182818284590;


    printf("The value of pi to 6 dp is %lf\n", pi); //lf is long float
    // if you do not specify a precision, lf also by default prints to 6 decimal places
    // so you must specify how many digits you want to be printed such as 
    printf("The value of pi to 14 dp is %.14lf\n", pi);
    printf("The value of euler's number to 13 dp is %.13lf\n", e);

    /* ====
       CHAR
       ==== */
    // Stores a single character(eg: a, b, A, B, $, *)

    char grade = 'A*'; //I wish
    char symbol = '!';
    char currency = '$';

    printf("Your grade is %c\n", grade); //c stands for character
    printf("The value of 5%c is 120.\n", symbol);
    printf("The total amount is %c9.99\n", currency);


    /* ======
       STRING
       ======*/
    // The C Programming language has no string data type, instead it uses an array of characters
    // Really a surprising thing I learnt today and I kinda like it as well!


    char name[] = "Hello World"; //The [] stands for an array, which is taught in depth in another file
    char food[] = "Pizza";
    char email[] = "email123@great.com";

    printf("The first thing I learnt is %s\n", name); //Even though there's no string data type, the format specifier is %s for string.
    printf("My friends love %s\n", food);
    printf("My email is %s\n", email);


    /* =======
       BOOLEAN
       =======*/
    //In order to work with booleans we need another library called stdbool.h so we add it to the top of our program

    bool isOnline = true; //can also use 0 (False) or 1 (True)
    bool isStudent=false;

    printf("%d\n", isOnline); //usually used internally without doing much printing

    if(isOnline){
        printf("You are online");
    }
    else{
        printf("You are offline");
    }
    printf("\n");
    if(isStudent){
        printf("You are a student");
    }
    else{
        printf("You are not a student");
    }

    return 0;
}