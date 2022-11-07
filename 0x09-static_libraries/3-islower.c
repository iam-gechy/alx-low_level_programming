#include "main.h"

/**
 * _islower - Check if 'c' is a lowercase
 * @c: is the character
 * Return: 1 if c is lowercase; otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
