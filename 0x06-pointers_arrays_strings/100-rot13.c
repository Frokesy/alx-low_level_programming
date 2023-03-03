#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 encryption.
 *
 * @s: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *s)
{
int i, j;
char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
for (i = 0; s[i]; i++)
{
for (j = 0; letters[j]; j++)
{
if (s[i] == letters[j])
{
s[i] = rot[j];
break;
}
}
}
return (s);
}
