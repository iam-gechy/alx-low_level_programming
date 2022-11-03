#include "main.h"

/**
 * sqrt_check - find the square root
 * @n: Number to find square root of
 * @c: The number checked
 * Return: The square root value
 */

int sqrt_check(int n, int c)
{
	if (c * c == n)
	{
		return (c);
	}
	else if (c >= n / 2)
	{
		return (-1);
	}
	return (sqrt_check(n, c + 1));
}

/**
 * _sqrt_recursion - Find the square root of given number
 * @n: Number given to find root of
 * Return: -1, If n does not have a natural square root.
 */

int _sqrt_recursion(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	return (sqrt_check(n, 1));
}
