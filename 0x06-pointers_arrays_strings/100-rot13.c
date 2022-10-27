#include main.h

/**
 * *rot13 - function that encodes a string using rot13.
 * @n: string to encode
 * Return: Always 0 (Success)
 *
 */

char *rot13(char *n)
{
	int i, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(n + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[j] == *(n + i))
			{
				*(n + i) = b[j];
				break;
			}
		}
	}
	return (n);
}
