#include <stdio.h>


int main(){

    // break = break out of a loop (STOP)
    // continue = Skip current cycle of a loop (SKIP)

    for (int i=1; i<=10; i++){
        if(i==4){
            break; // Only counts until 3!
        }

        printf("%d\n", i);
    }
    printf("\n");

    for (int i=1; i<=10; i++){
        if(i==4){
            continue; // SKIPS the CYCLE 4 !!
        }

        printf("%d\n", i);
    }

    return 0;
}