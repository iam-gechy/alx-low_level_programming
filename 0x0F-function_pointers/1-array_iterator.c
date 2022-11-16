#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter 
 * on each element of an array.
 * @array: array
 * @size: size of array
 * @action: pointer to the function of use.
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == Null)
	{
		return;
	}

	for (i = 0; i <= size; i++)
	{
		(*action)(*array[i])
	}
}
