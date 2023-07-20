#include "3-calc.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds
 * @a: first
 * @b: second
 *
 * Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subctracts
 * @a: first
 * @b: second
 *
 * Return:result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies
 * @a: first
 * @b: second
 *
 * Return: result.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides
 * @a: number.
 * @b: number.
 *
 * Return: result.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
		return (a / b);
}

/**
 * op_mod - module of two numbers
 * @a: first
 * @b: second
 *
 * Return: remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
