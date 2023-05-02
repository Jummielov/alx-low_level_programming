#include "main.h"
/**
 * print_rev - prints a string, in reverse followed by a new line.
 * @str: string to be printed in reverse
 * Return: 0
 */
void print_rev(char *str)
{
	int count = 0;

while (*str)
	{
	str++;
	count++;
}
while (count)
	{
	str--;
	_putchar(*str);
	count--;
	}
	_putchar('\n');
}
