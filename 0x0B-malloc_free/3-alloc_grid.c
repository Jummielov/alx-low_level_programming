#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **bag;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	bag = malloc(sizeof(int *) * height);

	if (bag == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		bag[a] = malloc(sizeof(int) * width);

		if (bag[a] == NULL)
		{
			for (; a >= 0; a--)
				free(bag[a]);

			free(bag);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			bag[a][b] = 0;
	}

	return (bag);
}
