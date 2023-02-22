#include "main.h"

int print_last_digit(int n)
{
int last_digit = n % 10;  // get the last digit by taking the remainder when n is divided by 10
_putchar(last_digit + '0');  // convert the last digit to a character and print it
return last_digit;  // return the last digit as an integer
}
