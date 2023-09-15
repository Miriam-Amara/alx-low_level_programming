#include "function_pointers.h"

/**
 *array_iterator - runs a function given as parameter on element of an array
 *
 *@array: pointer pointing to the array
 *@size: size of the array
 *@action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL || action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
