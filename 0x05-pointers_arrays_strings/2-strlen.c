#include "main.h"

/**
 * _strlen - calculate length of str s
 * @s: string
 * Return: length of s
 */

int _strlen(char *s)
{
int count = 0;

while (*(s + count) != '\0')
{
	count++;
}
return (count);
}
