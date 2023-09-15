#include "function_pointers.h"

/**
 *int_index - function that searches for an integer
 *
 *@array: pointer to an array
 *@size: size of the array
 *@cmp: function pointer
 *Return: integer values depending on what condition is met
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
			return (i);
	}
	return (-1);
}
