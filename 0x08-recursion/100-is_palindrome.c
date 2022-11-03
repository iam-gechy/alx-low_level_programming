#include "main.h"

/**
 * _strlen_recursion - Find the length of a string
 * @s: The string to find length of
 * Return: The length
 */

int _strlen_recursion(char *s)
{
	int n;

	n = 0;

	if (*s != 0)
	{
		n++;
		return (n + _strlen_recursion(s + 1));
	}
	return (n);
}

/**
 * pal_check - Actual check for palindrome
 * @s: String to check
 * @l: Length of string
 * Return: 1 if palindrome, 0 if otherwise
 */

int pal_check(char *s, int l)
{
	if (l <= 1)
	{
		return (1);
	}
	else if (*s != s[l - 1])
	{
		return (0);
	}
	else
	{
		return (pal_check((s + 1), (l - 2)));
	}
}

/**
 * is_palindrome - Check if a string is a palindrome
 * @s: String
 * Return: 1 if palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int l;

	l = _strlen_recursion(s);

	if (l <= 1)
	{
		return (1);
	}

	return (pal_check(s, l));
}
