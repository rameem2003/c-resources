#include <stdio.h>

int main()
{
    /**
     * Basic Pointer Operations
     */
    int a = 100;                            // normal valiable
    int *p = &a;                            // pointer variable
    printf("Memory address a is %d \n", p); // get the memory address
    printf("Value of pointer p is %d", *p); // get the value of pointer
}