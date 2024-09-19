#include <stdio.h>

int main()
{
    int *p; // pointer variable
    int q;  // normal variable

    p = &q;    // p is stored the address of q
    *p = 2000; // assign a value to q by pointer

    printf("q value is %d", q);
}