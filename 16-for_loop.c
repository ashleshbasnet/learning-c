#include <stdio.h>
#include <unistd.h> //LINUX/ MAC FOR WINDOWS USE windows.h, INTRODUCES SLEEP FUNCTION

int main(){

    // for loop = Repeat some code a limited # of times
    //            for(Initialisationl; Condition; Update)
    

    for(int i = 0; i < 10; i+=2){ // SYNTAX: for(<variable>; loop run times, what to do after every loop)
        printf("%d\n", i);
    }
    printf("\n");
    for(int i = 10; i >=0; i--){
        sleep(1); //SLEEP CREATES A CLOCK LIKE THINGY! the parameter is in SECONDS!
        printf("%d\n", i);
    }

    printf("HAPPY NEW YEAR!\n");


    return 0;
}