#include <stdio.h>

int main()
{
    int a;     // variable int
    double *b; // pointer variable double

    b = &a;     // `b` is stored the address of int `a`
    *b = 20.04; // assign a value to int `a` by pointer

    printf("a value is %d", a);
}