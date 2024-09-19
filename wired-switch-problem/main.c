#include<stdio.h>

void main(){
    unsigned char c = 280;
    switch (c)
    {
    case 280:
        printf("Hi");
        break;
    case 24:
        printf("Hello");
        break;
    
    default:
        printf("Bye");
        break;
    }
}