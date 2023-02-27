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
int num = 10;
int *ptr = &num;
printf("num = %d\n", num);
reset_to_98(ptr);
printf("num = %d\n", num);
return 0;
}
