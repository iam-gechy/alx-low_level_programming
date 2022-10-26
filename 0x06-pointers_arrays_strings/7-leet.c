#include "main.h"

/**
 * *leet - function that encodes a string into 1337.
 * ONE if, TWO loops only
 * @s: string to encode
 *
 * Return: Always 0 (Success)
 */

char *leet(char *s)
{
	int i, j;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[j] == s[i])
				s[i] = b[j];
		}
	}
	return (s);
}
