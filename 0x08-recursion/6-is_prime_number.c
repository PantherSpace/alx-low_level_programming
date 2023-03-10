#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - checks if a number is prime recursively
 * @n: the number to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
/* Base cases */
if (n <= 1)
return (0);
if (n <= 3)
return (1);

/* Check if n is divisible by any number up to sqrt(n) */
int i;
for (i = 2; i * i <= n; i++)
if (n % i == 0)
return (0);

return (1);
}
