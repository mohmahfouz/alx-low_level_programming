#include "main.h"

/**
 * puts_half - prints second half of string
 * @str: string 
 * Return: nothing
 */

void puts_half(char *str)
{
int count = 0, i;

while (*(str + count) != '\0')
{
	count++;
}
for (i = 0 ; i < count ; i++)
{
	if (i > (count - 1) / 2)
		_putchar(*(str + i));
}
_putchar('\n');
}
