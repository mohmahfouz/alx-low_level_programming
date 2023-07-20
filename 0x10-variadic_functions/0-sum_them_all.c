#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *sum_them_all - sum
 *@n: n input
 * Return: nothing
 */
int sum_them_all(const unsigned int n, ...)
{
va_list total;
int sum = 0;
unsigned int x;
if (n == 0)
{
return (0);
}
va_start(total, n);
for (x = 0; x < n; x++)
{
sum = sum + va_arg(total, int);
}
va_end(total);
return (sum);
}
