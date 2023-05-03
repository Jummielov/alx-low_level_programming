#include<stdio.h>
/**
 * print_array - prints n element of an array of integers,
 * followed by \ a new line.
 * @a: array to be printed.
 * @n: number of elements in array
 * Return: 0
 */
void print_array(int *a, int n)
{
	int count = 0;

	while (count < n)
	{
		printf("%d\n", a[count]);
		if (count != (n -1))
			printf(", ");
	}
		count++;
}
