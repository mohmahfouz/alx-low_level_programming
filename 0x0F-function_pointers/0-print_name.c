#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - printing name
 * @name: name inpute
 * @f: pointer
 *
 * Return: no return.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
