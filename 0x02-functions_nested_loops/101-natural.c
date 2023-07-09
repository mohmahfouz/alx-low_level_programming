#include <stdio.h>
/**
* main - entry
* Description:prints sum of all multiples of 3 or 5
* Return: 0
**/
int main(void)
{
int n, s  = 0;

for (n = 3; n < 1024; n++)
{
if ((n % 3 == 0) || (n % 5 == 0))
{
s = s + n;
}
}
printf("%d\n", s);

return (0);
}
