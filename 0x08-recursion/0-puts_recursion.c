#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints string to the output
 * @str: array of chars
 * Return: nothing
*/

void _puts_recursion(char* str) {
    if (*str == '\0') {
        putchar('\n');
        return;
    }
    putchar(*str);
    _puts_recursion(str + 1);
}
