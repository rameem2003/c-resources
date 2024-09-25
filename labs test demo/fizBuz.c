#include <stdio.h>

int main()
{
    /**
     * Write a C program that prints numbers from 1 to 50. If the number is divisible by 3, print
     * "Fizz" instead of the number. If it is divisible by 5, print "Buzz." If it is divisible by both 3
     * and 5, print "FizzBuzz."
     */
    for (int i = 0; i <= 50; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("FizzBuzz\n");
        }
        else if (i % 3 == 0)
        {
            printf("Fizz\n");
        }
        else if (i % 5 == 0)
        {
            printf("buzz\n");
        }
        else
        {
            printf("%d\n", i);
        }
    }
}