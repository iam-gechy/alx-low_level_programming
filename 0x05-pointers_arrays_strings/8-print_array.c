#include "main.h"
#include <stdio.h>

/**
 * print_array - print n element of an array of integers with a new line.
 * @a: array to be printed.
 * @n: number of elements of the array.
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		if (index == 0)
			printf("%d", a[index]);
		else
			printf(", %d", a[index]);
	}

	putchar('\n');
}
