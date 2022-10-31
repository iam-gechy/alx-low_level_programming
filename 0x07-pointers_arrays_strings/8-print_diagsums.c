#include "main.h"
#include "stdio.h"

/**
  * print_diagsums -  prints the sum of the two diagonals of a square matrix
  * @a: input
  * @size: value
  * Return: Always 0 (Success)
*/

void print_diagsums(int *a, int size)
{
	int i, s1 = 0, s2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[(size + 1) * i];
		sum2 += a[(size - 1) * (i + 1)];
	}

	printf("%d, %d\n", s1, s2);
}
