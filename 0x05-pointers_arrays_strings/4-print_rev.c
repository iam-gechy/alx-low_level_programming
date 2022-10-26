#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * fcount is to first count to end, r is to reverse counting.
 * @s: str input
 *
 * Return: string in reverse
 */

void print_rev(char *s)
{
	int fcount = 0;
	int i, r;

	for (i = 0; s[i] != '\0'; i++)
	{
		fcount++;
	}

	for (r = (fcount - 1); r >= 0; r--)
	{
		_putchar(s[r]);
	}
	_putchar('\n');
}
