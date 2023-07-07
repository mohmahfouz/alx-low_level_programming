#include "main.h"

/**
* _puts - prints str with newline
* @str: string
* Return: nothing
*/

void _puts(char *str)
{
int count = 0;

while (*(str + count) != '\0')
{
	if (*(str + count) != '"')
		_putchar(*(str + count));
count++;
}
_putchar('\n');
}
