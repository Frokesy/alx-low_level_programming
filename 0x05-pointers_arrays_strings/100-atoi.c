#include "main.h"
#include <stdio.h>

/**

* _atoi - converts a string to an integer
* @s: the string to convert
* Return: the integer value of the string
* The number in the string can be preceded 
* by an infinite number of characters
* Take into account all the - and + signs before the number
* If there are no numbers in the string, return 0
*/

int _atoi(char *s)
{
int sign = 1;
int result = 0;
int i = 0;
while (s[i] == ' ') {
i++;
}
if (s[i] == '-') {
sign = -1;
i++;
}
else if (s[i] == '+') {
i++;
}
while (s[i] >= '0' && s[i] <= '9') {
result = result * 10 + (s[i] - '0');
i++;
}    
return (sign * result);
}
