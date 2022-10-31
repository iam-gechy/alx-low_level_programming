#include "main.h"
#include "stdio.h"

/**
 * print_diagsums -  Entry point
 * Desc: Entry
 * @a: input
 * @size: value
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int k;
	int s1 = 0;
	int s2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			k = (i * size) + j;
			if (i == j)
			{
				s1 = s1 + a[k];
			}
			if ((i + j) == (size - 1))
			{
				s2 = s2 + a[k];
			}
		}
	}
	printf("%d, %d\n", s1, s2);
}
		sum1 += a[(size + 1) * i];
		sum2 += a[(size - 1) * (i + 1)];
	}

	printf("%d, %d\n", s1, s2);
}
