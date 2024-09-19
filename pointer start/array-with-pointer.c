#include <stdio.h>

int main()
{
    int arr[10] = {10, 20, 30, 40, 50}; // array
    int *p;                             // pointer

    p = arr; // p holds the addres of arr

    printf("%d %d %d \n", *(p), *(p + 1), *(p + 2)); // we can access array index by pointer
    printf("%d %d %d", arr[0], arr[1], arr[2]);      // normal access
}
