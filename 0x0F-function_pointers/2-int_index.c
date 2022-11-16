#include <stdlib.h>
#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer.
 * @size: number of element in the array.
 * @array: array
 * @cmp: pointer to the function to be used to compare values.
 * Return: the index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}

	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]) != 0)
		{
			return (j);
		}
	}

	return (-1);
}
