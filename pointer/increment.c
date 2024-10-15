#include <stdio.h>

int main()
{
    int *p;
    int q = 10, r = 100;

    p = &q;

    // (*p)++; // আগে pinter এর value এর কাছে গেছে গিয়ে ++ করছে

    *p++;

    printf("value is %d \n", *p);
}