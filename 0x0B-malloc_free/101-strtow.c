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
	char **strArr;
	int wordCount, counter, letter;

	if (str == NULL || *str == '\0')
		return (NULL);

	wordCount = word_count(str);

	strArr = (char **)malloc(sizeof(char *) * (wordCount + 1));

	if (!strArr)
		return (NULL);

	for (counter = 0; counter <= wordCount;)
	{
		strArr[counter] = (NULL);
		counter++;
	}

	counter = 0;
	wordCount = 0;
	letter = 0;

	while (str[counter] != '\0')
	{
		if (str[counter] != ' ' && !letter)
		{
			strArr[wordCount] = first_word(str + wordCount);
			if (!strArr[counter])
			{
				wordCount--;
				while (wordCount >= 0)
					free(*(strArr + wordCount--));
				free(strArr);
				return (NULL);
			}
			wordCount++;
			letter = 1;
		}
		else if (*(str + counter) == ' ' && letter)
			letter = 0;
		counter++;

		if (!wordCount)
			return (NULL);

		return (strArr);

		if (str[wordCount] != ' ' && !letter)
		{
			strArr[counter] = first_word(str + counter);
			if (!strArr[counter])
			{
				wordCount--;
				while (wordCount >= 0)
					free(*(strArr + wordCount--));
				free(strArr);
				return (NULL);
			}
			wordCount++;
			letter = 1;
		}
		else if (str[counter] == ' ' && letter)
			letter = 0;
		counter++;
	}
	if (!wordCount)
		return (NULL);

	return (strArr);
}

/**
 * word_count - Count number of words
 * @str: char pointer
 * Return: Word count
 */

int word_count(char *str)
{
	int counter = 0, wordCount, letter;

	while (str[counter] != '\0')
	{
		if (str[counter] != ' ' && !letter)
		{
			wordCount++;
			letter = 1;
		}
		else if (str[counter] == ' ' && letter)
		{
			letter = 0;
		}
		counter++;
	}
	return (wordCount);
}

/**
 * first_word - Gets first word
 * @str: char pointer
 * Return: Pointer to word
 */

char *first_word(char *str)
{
	int counter;
	char *word;

	counter = 0;

	while (str[counter] != ' ' && str[counter] != '\0')
	{
		counter++;
	}

	word = malloc(sizeof(char) * (counter + 1));

	if (!word)
	{
		return (NULL);
	}

	word[counter] = '\0';

	counter--;

	while (counter >= 0)
	{
		word[counter] = str[counter];
		counter--;
	}
	return (word);
}



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
