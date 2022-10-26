#include "main.h"

/**
 * _strlen - Return the length of a string.
 * @s: char input
 *
 * Return: length of a string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
