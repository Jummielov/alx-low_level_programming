#include "main.h"
/**
 * swap_int - returns the values of two integers.
 * @a: first number
 * @b: second number
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
