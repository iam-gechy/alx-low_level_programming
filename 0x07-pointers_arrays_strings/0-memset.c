#include "main.h"
#include <stdio.h>

/**
  * _memset - Entry point.
  * @s: pointed memory area.
  * @n: byte
  * @b: constant byte.
  * Return: Always 0 (Success)
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
