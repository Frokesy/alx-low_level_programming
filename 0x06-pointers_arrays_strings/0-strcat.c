#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: Destination string
 * @src: Source string to be appended to dest
 *
 * Description: This function appends the src string to the dest string, overwriting
 * the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
 *
 * Return: Pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
int dest_len = 0;
while (dest[dest_len] != '\0') {
dest_len++;
}
int i = 0;
while (src[i] != '\0') {
dest[dest_len + i] = src[i];
i++;
}
dest[dest_len + i] = '\0';
return (dest);
}
