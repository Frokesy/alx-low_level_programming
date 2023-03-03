#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @s: the string to capitalize
 *
 * Return: pointer to the capitalized string
 */
char *cap_string(char *)
{
int i;
if (s == NULL)
return (NULL);
for (i = 0; s[i] != '\0'; i++)
{
if (i == 0 || s[i - 1] == ' ' || s[i - 1] == '\t' ||
s[i - 1] == '\n' || s[i - 1] == ',' || s[i - 1] == ';' ||
s[i - 1] == '.' || s[i - 1] == '!' || s[i - 1] == '?' ||
s[i - 1] == '"' || s[i - 1] == '(' || s[i - 1] == ')' ||
s[i - 1] == '{' || s[i - 1] == '}')
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] -= 32;
}
}
}
return (s);
}
