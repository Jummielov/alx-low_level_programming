#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @a1: input one to concat
 * @a2: input two to concat
 * Return: concat of a1 and a2
 */
char *str_concat(char *a1, char *a2)
{
	char *concat;
	int i, bi;

	if (a1 == NULL)
		a1 = "";
	if (a2 == NULL)
		a2 = "";

	i = bi = 0;
	while (a1[i] != '\0')
		i++;
	while (a2[bi] != '\0')
		bi++;
	concat = malloc(sizeof(char) * (i + bi + 1));

	if (concat == NULL)
		return (NULL);
	i = bi = 0;
	while (a1[i] != '\0')
	{
		concat[i] = a1[i];
		i++;
	}

	while (a2[bi] != '\0')
	{
		concat[i] = a2[bi];
		i++, bi++;
	}
	concat[i] = '\0';
	return (concat);
}
