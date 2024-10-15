#include <stdio.h>

int main()
{
    // pointer এর মাধ্যমে ডাটা store করে কিভাবে
    int a;
    int *p;

    a = 500;

    p = &a;

    *p = 600;

    printf("value is %d \n", a);
}