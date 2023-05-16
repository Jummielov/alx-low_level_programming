#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size msize and assign char c
 * @msize: size of array
 * @c: char to assign
 * Description: create array of size msize and assign char c
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int msize, char c)
{
	char *str;
	unsigned int a;

	str = malloc(sizeof(char) * msize);
	if (msize == 0 || str == NULL)
		return (NULL);

	for (a = 0; a < msize; a++)
		str[a] = c;
	return (str);
}
