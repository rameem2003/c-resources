#include <stdio.h>

int main()
{
    int *p;
    int q = 10, r = 100;

    p = &q;
    (*p)++; // 11
    printf("%d \n", *p);
    *p++; // 100
    printf("%d", *p);
}