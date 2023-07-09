#include "main.h"

/**
 * _islower - Checks lowercase.
 * @c: The character
 * Return: 1 if character is lowercase
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
