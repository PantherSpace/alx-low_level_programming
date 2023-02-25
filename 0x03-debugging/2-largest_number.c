#include "main.h"
#include <stdio.h>

int largest_number(int a, int b, int c);

int main(void)
{
    int a, b, c, largest;

    a = 972;
    b = -98;
    c = 0;

    largest = largest_number(a, b, c);

    printf("%d is the largest number\n", largest);

    return 0;
}

int largest_number(int a, int b, int c)
{
    int largest;

    if (a > b && a > c)
    {
        largest = a;
    }
    else if (b > a && b > c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }

    return largest;
}
