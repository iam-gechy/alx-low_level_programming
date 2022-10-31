#include "main.h"

/**
  * _memset - Entry point.
  * Desc: Entry
  * @s: pointed memory area.
  * @n: byte
  * @b: constant byte.
  * Return: Always 0 (Success)
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
