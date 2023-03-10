#include <stdio.h>
#include "main.h"

/**
 * sqrt_helper - recursively calculate the square root of a number
 * @n: the number to calculate the square root of
 * @i: the current guess for the square root
 *
 * Return: the square root of n if it is a perfect square, otherwise -1
 */
int sqrt_helper(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - calculate the natural square root of a number
 * @n: the number to calculate the square root of
 *
 * Return: the square root of n if it is a perfect square, otherwise -1
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (sqrt_helper(n, 0));
}
