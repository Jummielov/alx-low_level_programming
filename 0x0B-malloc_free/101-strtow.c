#include <stdlib.h>
#include "main.h"
/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 * Return: number of words
 */
int count_word(char *s)
{
	int flag, a, b;

	flag = 0;
	b = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			b++;
		}
	}

	return (b);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **mat, *tmp;
	int m, n = 0, lent = 0, wrd, a = 0, start, end;

	while (*(str + lent))
		lent++;
	wrd = count_word(str);
	if (wrd == 0)
		return (NULL);

	mat = (char **) malloc(sizeof(char *) * (wrd + 1));
	if (mat == NULL)
		return (NULL);

	for (m = 0; m <= lent; m++)
	{
		if (str[m] == ' ' || str[m] == '\0')
		{
			if (a)
			{
				end = m;
				tmp = (char *) malloc(sizeof(char) * (a + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				mat[n] = tmp - a;
				n++;
				a = 0;
			}
		}
		else if (a++ == 0)
			start = a;
	}

	mat[n] = NULL;

	return (mat);
}
