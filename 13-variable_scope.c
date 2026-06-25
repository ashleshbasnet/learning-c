#include <stdio.h>
 

int globalvar = 0; // GLOBAL SCOPE, IT CAN BE USED IN ANY FUNCTION!!!!! (hard to debug)


int add(int x, int y){
    int globalvar = 5;
    printf("%d", globalvar); //CALLED SHADOWING! Local SCOPE always takes priority!!
    int result = x + y;
    return result;
}

int main(){

    // variable scope = Refers to where a variable is recognised and accessible
    //                  Variables can share the same name if they're in different scopes {}
    //                  Basically, local variables in each function can have the same name
    //                  But they can't be the same in the same function! Redefinition isn't possible in C!!


    int result = add(3,4); //Result here and result in add() are the same name! But have different scopes!!

    printf("%d", result); //Therefore, a function can't see what's inside another function.
    //                      They only pass in a parameter and get output, you could say they have the function abstracted!

    return 0;
}