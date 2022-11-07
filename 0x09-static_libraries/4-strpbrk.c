#include "main.h"

/**
  * _strpbrk - Entry point
  * Desc: Entry
  * @s: pointer
  * @accept: pointer
  * Return: Always 0 (Success)
*/

char *_strpbrk(char *s, char *accept)
{
	int t;
	int n;

	for (t = 0 ; s[t] != '\0' ; t++)
	{
		for (n = 0 ; accept[n] ; n++)
		{
			if (s[t] == accept[n])
			{
				return (s + t);
			}
		}
	}
	s = 0;
	return (0);
}
