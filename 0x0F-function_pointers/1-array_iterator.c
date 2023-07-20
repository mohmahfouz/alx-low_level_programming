#include <stddef.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
* array_iterator - array__interator
* @array: pointer
* @size: array
* @action: pointer
* Return:nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned long int i;

if (array == NULL || action == NULL)
return;
for (i = 0; i < size; i++)
action(array[i]);
}
