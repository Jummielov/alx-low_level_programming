#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a new string which is a duplicate
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *copy;
	int a, b = 0;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
	a++;

	copy = malloc(sizeof(char) * (a + 1));

	if (copy == NULL)
		return (NULL);

	for (b = 0; str[b]; b++)
		copy[b] = str[b];

	return (copy);
}
