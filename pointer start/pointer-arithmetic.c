#include <stdio.h>

int main()
{
    char a;
    char *b;
    b = &a;
    b++; // increase by 1 (char use 1 byte memory)

    printf("Address of char b %d \n", b); // show the increased value of b (address of a)

    int e;
    int *f;
    f = &e;

    f++; // increase by 4 (int use 4 byte memory)

    printf("Address of int f %d", f); // show the increased value of f (address of e)
}