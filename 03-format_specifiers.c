#include <stdio.h>

int main(){
    // Format Specifier = Special tokens that begin with a % symbol
    //                    followed by a character that specifies the data type
    //                    and optional modifiers (width, precision, flags)
    //                    They control how data is displayed

    // Basically our output flags, which we can modify according to the precision, control and
    // data we need, sounds really useful!

    int age = 17;
    float price = 19.99;
    double pi = 3.1415926535;
    char currency = '$';
    char name[] = "My Name";


    printf("%d\n", age); //d --> decimal
    printf("%f\n", price); //f --> float
    printf("%f\n", pi);
    printf("%lf\n", pi); //lf --> long float
    //both work but lf for double to stay consistent is reccomended by tutorial
    //will look into more as tutorial goes
    printf("%c\n",currency); //c --> char
    printf("%s\n",name); //s --> string

    printf("\n");

    // % d
    //  ^
    //  |  
    // In this space, between % and the specifier, we can add special characters to format the output

    /* =====
       Width
       =====*/

    int num1 = 1;
    int num2 = 10;
    int num3 = 100;

    printf("%3d\n", num1); // We can put any number in the place between % and specifier to change
    printf("%3d\n", num2); // the width of our output, this means that the numbers here will all be
    printf("%3d\n", num3); // printed with 3 spaces __1, _10, 100 and so on
    //                        These numbers are aligned to the right completely
    //                        To justify left, we can add a negative sign before i.e:
    printf("\n");

    printf("%-4d\n", num1);
    printf("%-4d\n", num2);
    printf("%-4d\n\n", num3);
    // We can also have leading zeros, for the sake of not getting a messy output, I'll be using num1 only

    printf("%04d\n\n",num1);

    //another cool thing is that we can print the sign of the integer i.e
    int num4 = -100;
    printf("%+d\n", num3);
    printf("%+d\n\n", num4);


    /*=========
      Precision
      =========*/

    float price1=19.99;
    float price2=1.50;
    float price3=-100.60;

    printf("%f\n", price1); // By default C shows a precision of 6 dps
    printf("%.2f\n", price2); // Adding a dot and number of dp after it between the % and f 
    printf("%.0f\n\n", price3); // allows you to control the number of dps you want
    // If you choose a precision less than the one you have in your number, then C will 
    // automatically round it off for you


    /*==================
      Combining them all
      ==================*/

    printf("%+7f\n", price1); // It goes something like + <- if you want to show the sign of the number
    printf("%+7.2f\n", price2);// followed by the width setting and then finally the precision
    printf("%7.0f\n", price3);// I am not sure if this is a hard and fast rule or if you can do it in any order.

    /*=============
      Final Summary
      =============*/
    /*
    Probably in order:
        1. % -> Every format specifier starts with this
        2. Flags -> Controls alignment, signs and leading zeros, - for left align, + to show the sign and 0 for leading zero
        3. Width -> The minimum number of characters to print
        4. Precision -> Starts with a . and controls the no. of dps
        5. Length? -> Not sure about this read it in a book somewhere
        6. Specifier -> The data type character
    */



    // dp = decimal place
    return 0;
}