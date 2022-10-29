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
		printf("%d", a[index]);
		if (index != (n - 1))
		{
			printf(",");
		}
	}
	putchar('\n');
}
