#include <stdio.h>
#include "main.h"

/**
 * wildcmp - compares two strings with wildcard expansion
 * @s1: first string to compare
 * @s2: second string to compare, may contain wildcard *
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
/* If both strings are empty, they match */
if (*s1 == '\0' && *s2 == '\0')
return (1);

/* If the current character in s2 is a wildcard, try different options */
if (*s2 == '*')
{
/* Check if the rest of s2 matches s1 */
if (wildcmp(s1, s2 + 1))
return (1);

/* Check if the rest of s1 matches the remaining characters of s2 */
if (*s1 != '\0' && wildcmp(s1 + 1, s2))
return (1);

/* If none of the above matches, the strings don't match */
return (0);
}

/* If the current characters in s1 and s2 match, continue comparing */
if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));

/* If none of the above matches, the strings don't match */
return (0);
}
