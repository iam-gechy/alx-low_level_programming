#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: The string
 * Return: The length
 */

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s != 0)
	{
		n++;
		return (n + _strlen_recursion(s + 1));
	}
	return (n);
}
