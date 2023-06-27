#include "main.h"

/**
 * _strcpy - copies source to destination
 * @source: source
 * @destination: destination
 *
 * Return: pointer to dest
 */
char *_strcpy(char *destination, char *source)
{
int i = 0;

while (*(source + i))
{
*(destination + i) = *(source + i);
i++;
}
*(destination + i) = '\0';
return (destination);
}
