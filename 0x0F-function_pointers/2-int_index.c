#include "function_pointers.h"

/**
 * int_inex - earches for an integer
 * @array: array to search in
 * @size: size of the array
 * @cmp: pointers of the comparing function
 *
 * Return: index of the fist element for which
 * the cmp function does not return 0, or -1 if no match is found
 * or size id negative
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
