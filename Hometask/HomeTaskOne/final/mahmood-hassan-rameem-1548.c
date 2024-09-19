#include <stdio.h>

/**
 * Name: Mahmood Hassan Rameem (Roll: 1548)
 * Write a C program that takes an integer input, 
 * treats the integer as the total number in the Structured Programming Language 
 * Course of a student, and outputs Letter Grade, Grade Point, and Assessment 
 * Like: Letter Grade->B+ , Grade Point->3.25, Assessment->Good
 */

void main(){
    // initiate a integer vairiable
    int result;


    // first take a input from a user
    printf("Structured Programming Mark:");
    scanf("%d", &result);

    // then check the mark and show the assesment accoding to the mark
    if(result >= 80 && result <= 100){
        printf("Letter Grade -> A+,  Grade Point -> 4.00,  Assesment -> Exceptional");
    }
    else if(result >= 75 && result <= 79){
        printf("Letter Grade -> A , Grade Point -> 3.75,  Assesment -> Excellent");
    }
    else if(result >= 70 && result <= 74){
        printf("Letter Grade -> A-,  Grade Point -> 3.50,  Assesment -> Very Good");
    }
    else if(result >= 65 && result <= 69){
        printf("Letter Grade -> B+,  Grade Point -> 3.25,  Assesment -> Good");
    }
    else if(result >= 60 && result <= 64){
        printf("Letter Grade -> B,  Grade Point -> 3.00,  Assesment -> Good");
    }
    else if(result >= 55 && result <= 59){
        printf("Letter Grade -> B-,  Grade Point -> 2.75,  Assesment -> Satisfactory");
    }
    else if(result >= 50 && result <= 54){
        printf("Letter Grade -> C+,  Grade Point -> 2.50,  Assesment -> Pass");
    }
    else if(result >= 45 && result <= 49){
        printf("Letter Grade -> C,  Grade Point -> 2.25,  Assesment -> Pass");
    }
    else if(result >= 40 && result <= 44){
        printf("Letter Grade -> D,  Grade Point -> 2.00,  Assesment -> Pass");
    }
    else if(result <= 39){
        printf("Letter Grade -> F,  Grade Point -> 0.00,  Assesment -> Fail");
    }

    // if user didn't given a valid mark
    else{
        printf("Invalid Mark Entry");
    }


    
}