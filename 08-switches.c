#include <stdio.h>

int main(){

    // switch = An alternative to using many if-else statements
    //          More efficient with fixed integer values

    int dayOfWeek=0;

    printf("Enter a day of the week (1-7): ");
    scanf("%d", &dayOfWeek);
    
    switch(dayOfWeek){
        case 1: //basically a case of in BASIC, really cool and reduces long lines of if 
        //        and else statements and makes it more easy and efficient to code
            printf("Monday");
            break; //Do not forget break to break out of the switch!!
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");   //As you can see that its much shorter than trying to code a 
            //                    lot of if and else statements
            break; // If we do not put a break, then after the value matches, it will continue
            //        the execution of the cases after it as well 
        default:
            printf("Please only enter a number from 1 - 7!"); // Defaults when any case doesn't match

    }

    // They can also be used with characters
    
    char charOfTheWeek = '\0';

    printf("\nEnter a day of the week (M, T, W, R, F, S, U): ");
    scanf("%c", &charOfTheWeek);
    getchar();

    switch(dayOfWeek){
        case 'M': 
            printf("Monday");
            break; 
        case 'T':
            printf("Tuesday");
            break;
        case 'W':
            printf("Wednesday");
            break;
        case 'R':
            printf("Thursday");
            break;
        case 'F':
            printf("Friday");
            break;
        case 'S':
            printf("Saturday");
            break;
        case 'U':
            printf("Sunday");
            break;
        default:
            printf("Please only enter a day of the week (M, T, W, R, F, S, U)"); // Defaults when any case doesn't match

    }


    return 0;
}