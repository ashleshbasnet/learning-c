#include <stdio.h>

int square(int num){
    //int result = num * num; // we can just straight up put the operation!

    return num*num; //If you're returning a value, you can't use void! you need to use the data type
}

int main() {
    
    // return = returns a value back to where you call a function

    /*int x = 2*2;
    int y = 3*3;
    int z = 4*4;

    printf("%d, %d, %d", x, y, z); // Wouldn't it be nice if we had a function? */

    int x = square(2); // mathematics would say f(x)=y, we are inputting x, getting y as an answer
    int y = square(3);
    int z = square(4);

    printf("%d, %d, %d", x, y, z);


    return 0;
}