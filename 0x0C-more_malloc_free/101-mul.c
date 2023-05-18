#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"
/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
	int a = 0;

	while (s[a])
	{
		if (s[a] < '0' || s[a] > '9')
			return (0);
		a++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int lent1, lent2, lent, a, carry, digit1, digit2, *result, b = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	lent1 = _strlen(s1);
	lent2 = _strlen(s2);
	lent = lent1 + lent2 + 1;
	result = malloc(sizeof(int) * lent);
	if (!result)
		return (1);
	for (a = 0; a <= lent1 + lent2; a++)
		result[a] = 0;
	for (lent1 = lent1 - 1; lent1 >= 0; lent1--)
	{
		digit1 = s1[lent1] - '0';
		carry = 0;
		for (lent2 = _strlen(s2) - 1; lent2 >= 0; lent2--)
		{
			digit2 = s2[lent2] - '0';
			carry += result[lent1 + lent2 + 1] + (digit1 * digit2);
			result[lent1 + lent2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[lent1 + lent2 + 1] += carry;
	}
	for (a = 0; a < lent - 1; a++)
	{
		if (result[a])
			b = 1;
		if (b)
			_putchar(result[a] + '0');
	}
	if (!b)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
