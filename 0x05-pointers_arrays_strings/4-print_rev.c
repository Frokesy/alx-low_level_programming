#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse order
 * @s: Pointer to the string to be printed
 *
 * Return: void
 */
void print_rev(char *s)
{
int len = 0, i;
while (s[len] != '\0')
{
len++;
}
for (i = len - 1; i >= 0; i--)
{
putchar(s[i]);
}
putchar('\n');
}
