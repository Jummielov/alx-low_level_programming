#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @arc: int input
 * @arv: double pointer array
 * Return: 0
 */
char *argstostr(int arc, char **arv)
{
	int a, b, c = 0, d = 0;
	char *str;

	if (arc == 0 || arv == NULL)
		return (NULL);

	for (a = 0; a < arc; a++)
	{
		for (b = 0; arv[a][b]; b++)
			d++;
	}
	d += arc;

	str = malloc(sizeof(char) * d + 1);
	if (str == NULL)
		return (NULL);
	for (a = 0; a < arc; a++)
	{
	for (b = 0; arv[a][b]; b++)
	{
		str[c] = arv[a][b];
		c++;
	}
	if (str[c] == '\0')
	{
		str[c++] = '\n';
	}
	}
	return (str);
}
