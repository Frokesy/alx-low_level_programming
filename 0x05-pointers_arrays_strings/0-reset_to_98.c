#include "main.h"
#include <stdio.h>

/* 
 * reset_to_98 - updates the value a pointer points to to 98
 * @n: pointer to the integer to update
 *
 * This function takes a pointer to an integer as a parameter, and updates
 * the value it points to to 98.
 */
void reset_to_98(int *n)
{
*n = 98;
}
int main(void)
{
int n;
n = 402;
printf("n=%d\n", n);
reset_to_98(&n);
printf("n=%d\n", n);
return (0);
}
