#include <stdio.h>
#include "main.h"

/**
  * *_strchr - locate a character in a a string
  * @s: string
  * @c:char
  * Return: pointer to char
*/

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (s + x);
	}

	return (NULL);
}
