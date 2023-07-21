#include <stdlib.h>
#include "main.h"

/**
* *malloc_checked - malloc checked
* @b: bytes number
* Return: a pointer
*/
void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);

if (ptr == NULL)
exit(98);

return (ptr);
}
