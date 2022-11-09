#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - concatenates all the arguments of your program
 * @str: string
 * Return: a pointer to a new string
 */

char **strtow(char *str)
{
	char **a;
	int i, k, n, word_count = 0, word_len = 0, current_word = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; *(str + i) != '\0'; i++)
	{
		if (*(str + i) != ' ')
			word_count++;
		while (*(str + i) != ' ' && *(str + i))
			i++;
		if (!*(str + i))
			break;
	}
	if (word_count == 0)
		return (NULL);
	a = malloc(sizeof(char *) * (word_count + 1));
	if (a == NULL)
		return (NULL);
	for (i = 0, k = i; current_word < word_count; i++, word_len = 0, k = i)
	{
		if (*(str + i) == ' ')
			continue;
		while (*(str + k) != ' ' && *(str + k++))
			word_len++;
		a[current_word] = malloc(sizeof(char) * word_len + 1);
		if (!a[current_word])
		{
			while (current_word-- >= 0)
				free(a[current_word]);
			free(a);
			return (NULL);
		}
		for (n = 0; i < k; i++, n++)
			a[current_word][n] = *(str + i);
		a[current_word++][n] = '\0';
	}
	a[word_count] = NULL;
	return (a);
}

if (*str == '\0' || str == NULL)
	return (NULL);
for (i = 0; str[i] != '\0'; i++)
{
	if (str[i] == ' ' && (str[i + 1] != ' ' || str[i + 1] == '\0'))
		w++;
}
p = (char **)malloc((w + 1) * sizeof(char *));
if (p == NULL)
	return (NULL);
for (wordf = 0; str[wordf] && j <= w; wordf++)
{
	count = 0;
	if (str[wordf] != ' ')
	{
		for (i = wordf ; str[i] != '\0'; i++)
		{
			if (str[i] == ' ')
				break;
			count++;
		}
		*(p + j) = (char *)malloc((count + 1) * sizeof(char));
		if (*(p + j) == NULL)
		{
			for (k = 0; k <= j; k++)
			{
				x = p[k];
				free(x);
			}
			free(p);
			return (NULL);
		}
		for (m = 0; wordf < i; wordf++)
		{
			p[j][m] = str[wordf];
			m++;
		}
		p[j][m] = '\0';
		j++;
	}
}
	p[j] = NULL;
	return (p);
}
