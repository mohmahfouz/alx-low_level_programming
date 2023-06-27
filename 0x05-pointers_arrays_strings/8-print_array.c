#include <stdio.h>
#include "main.h"
/**
 * print_array - prints number n from array a
 * @a: array to print
 * @n: elements number
 * Return:Nothing
 */

void print_array(int *a, int n)
{
int i;

for (i = 0 ; i < n ; i++)
{
	if (i == n - 1)
		printf("%d", *(a + i));
	else
		printf("%d, ", *(a + i));
}
printf("\n");
}
