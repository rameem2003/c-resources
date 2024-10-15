#include <stdio.h>

void main()
{
    char **mp, *p, ch;

    p = &ch;
    mp = &p;

    **mp = 'A';

    printf("is %c \n", ch);
}