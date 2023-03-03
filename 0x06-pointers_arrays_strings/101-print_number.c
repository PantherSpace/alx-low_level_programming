#include <stdio.h>
#include "main.h"

/**
 * print_number - prints # using _putchar function
 * @n: the integer to print
 *
 * Return: void
 */

void print_number(int n)
{
    int i, j, digit, is_negative;

    is_negative = n < 0 ? 1 : 0;
    n = is_negative ? -n : n;

    i = 1;
    j = n;
    while (j >= 10) {
        i *= 10;
        j /= 10;
    }

    if (is_negative) {
        _putchar('-');
    }

    while (i >= 1) {
        digit = n / i;
        _putchar(digit + '0');
        n -= digit * i;
        i /= 10;
    }
}
