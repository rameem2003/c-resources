#include <stdio.h>

#define true 1 


void main(){

    char a;
    printf("Enter char:");
    scanf("%c", &a);
    // Nothing will be printed as there is no case
    // switch(true){
    //     printf("Execute");
    // }


    // no breaks all execute
    // switch(a){
    //     case 1: 
    //         printf("Rameem");

    //     default:
    //         printf("Fahmida");
    // }

    switch(a){
        case 'A': 
            printf("%d", a);
            break;

        default:
            printf("Hello");
    }



}