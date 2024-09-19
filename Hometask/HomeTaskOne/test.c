#include <stdio.h>

int main(){

    int mark;
    
    printf("Enter Mark:");
    scanf("%d", &mark);

    if(mark >= 80 && mark <= 100){
        printf("Letter Grade -> A+,  Grade Point -> 4.00,  Assesment -> Exceptional");
    }
    else if(mark >= 75 && mark <= 79){
        printf("Letter Grade -> A , Grade Point -> 3.75,  Assesment -> Excellent");
    }
    else if(mark >= 70 && mark <= 74){
        printf("Letter Grade -> A-,  Grade Point -> 3.50,  Assesment -> Very Good");
    }
    else if(mark >= 65 && mark <= 69){
        printf("Letter Grade -> B+,  Grade Point -> 3.25,  Assesment -> Good");
    }
    else if(mark >= 60 && mark <= 64){
        printf("Letter Grade -> B,  Grade Point -> 3.00,  Assesment -> Good");
    }
    else if(mark >= 55 && mark <= 59){
        printf("Letter Grade -> B-,  Grade Point -> 2.75,  Assesment -> Satisfactory");
    }
    else if(mark >= 50 && mark <= 54){
        printf("Letter Grade -> C+,  Grade Point -> 2.50,  Assesment -> Pass");
    }
    else if(mark >= 45 && mark <= 49){
        printf("Letter Grade -> C,  Grade Point -> 2.25,  Assesment -> Pass");
    }
    else if(mark >= 40 && mark <= 44){
        printf("Letter Grade -> D,  Grade Point -> 2.00,  Assesment -> Pass");
    }
    else if(mark <= 39){
        printf("Letter Grade -> F,  Grade Point -> 0.00,  Assesment -> Fail");
    }
    else{
        printf("Invalid Mark Entry");
    }


    
}