#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: output
 * Return: Always 0.
 */

void _puts(char *str)
{
	int str;

	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
