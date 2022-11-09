#include "main.h"
#include <stdio.h>

/**
 * alloc_grid - Entry point
 * @width: rows of matrix
 * @height: columns of string
 * Return: a pointer to a 2 dimensional array of integers or null
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **ar;

	if (width == 0 || height == 0)
		return (NULL);
	ar = malloc(height * sizeof(int *));
	if (ar == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(width * sizeof(int));
		if (ar[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
				free(ar[i]);

			free(ar);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			ar[i][j] = 0;
	}
	return (ar);
}
