#include "main.h"

/**
 * flip_bits - gives the number of bits i need  flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int result;
	unsigned long int excl = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		result = excl >> i;
		if (result & 1)
			count++;
	}

	return (count);
}
