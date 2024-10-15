#include <stdio.h>

int main()
{

    double a;
    int *b;

    b = &a;

    *b = 200;

    printf("value is %lf \n", a);
}