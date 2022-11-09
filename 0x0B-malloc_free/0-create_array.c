#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array -  creates an array of chars, and initializes it
 * @size: size of the array
 * @c: character
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c);
{
	char *array = NULL;
	unsigned int d;

	if (size == 0)
		return (NULL);

	if (size != 0)
	{
		array = (char *)malloc(size * sizeof(char));
		if (array != NULL)
		{
			for (d = 0; d < size; d++)
				array[d] = c;
		}
	}

	return (array);
}
