#include main.h

/**
 * *rot13 - function that encodes a string using rot13.
 * @str: string to encode
 * Return: Always 0 (Success)
 *
 */

char *rot13(char *str)
{
	int i, j;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (alpha[j] != '\0')
		{
			if (str[i] == alpha[j])
			{
				str[i] = rot[j];
					break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
