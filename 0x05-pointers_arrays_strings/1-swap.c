#include "main.h"

/**
 * swap_int - takes two integers and swap them
 * @a: pointer to a
 * @b: pointer to b
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
