#include "main.h"

/**
 * binary_to_uint - converts a binary number
 * to unsigned int
 * @b: binary number
 *
 * Return: the unsigned int number
 */
unsigned int binary_to_uint(const char *b)
{
	int lent;
	unsigned int decimval = 0;

	if (!b)
		return (0);

	for (lent = 0; b[lent]; lent++)
	{
		if (b[lent] < '0' || b[lent] > '1')
			return (0);
		decimval = 2 * decimval + (b[lent] - '0');
	}

	return (decimval);
}

