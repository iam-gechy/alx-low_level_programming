#include "main.h"

/**
 * *_strcat - concatenates two strings.
 * @src: copy from
 * @dest: copy to
 * Return: two concat strings
 */

char *_strcat(char *dest, char *src)
{
	int i, n;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (n = 0; (dest[i + n] = *src++) != '\0'; n++)
	{
	}

	return (dest);
}
