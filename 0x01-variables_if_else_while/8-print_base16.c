#include <stdio.h>
/**
 * main - Prints number between 0 to 9 and letters between a to f.
 *
 * *Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
