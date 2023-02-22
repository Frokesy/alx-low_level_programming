#include "main.h"

{
int hours, minutes;
for (hours = 0; hours < 24; hours++) {
for (minutes = 0; minutes < 60; minutes++) {
_putchar((hours / 10) + '0');  // print the tens digit of the hour
_putchar((hours % 10) + '0');  // print the ones digit of the hour
_putchar(':');  // print the colon separator
_putchar((minutes / 10) + '0');  // print the tens digit of the minute
_putchar((minutes % 10) + '0');  // print the ones digit of the minute
_putchar('\n');  // print a newline character
}
}
}

