#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array using a function pointer
 * @array: pointer to the array
 * @size: number of elements in the array
 * @cmp: function pointer used to compare values
 *
 * Return: index of first element for which cmp != 0, or -1 if not found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
