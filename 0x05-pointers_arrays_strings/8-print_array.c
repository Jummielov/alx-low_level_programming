#include<stdio.h>
#include "main.h"
/**
 * print_array - prints n element of an array of integers,
 * followed by \ a new line.
 * @a: array to be printed.
 * @n: number of elements in array
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (n -1))
		{
			printf("%d", a[n - 1]);
		}
		printf("\n");
}
