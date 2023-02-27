#include <stdlib.h>
#include <time.h>

int main(void)
{
int password[6] = {0};
int sum = 0, i;
srand(time(NULL));
while (sum != 2772)
{
for (i = 0; i < 6; i++)
{
password[i] = rand() % 10;
sum += password[i];
}
}
for (i = 0; i < 6; i++)
printf("%d", password[i]);
return (0);
}
