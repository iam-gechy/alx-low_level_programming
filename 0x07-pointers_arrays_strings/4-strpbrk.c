#include "main.h"

/**
  * *_strpbrk - searches a string for any of a set of bytes.
  * @s: input
  * @accept: input
  * Return: pointer to the byte in s
*/

char *_strpbrk(char *s, char *accept)
{
	int t, n;

	for (t = 0 ; s[t] != '\0' ; t++)
	{
		for (n = 0 ; accept[n] ; n++)
		{
			if (s[t] == accept[n])
				return (s + t);
		}
	}
	s = 0;

	return (NULL);
}
