#include <stdio.h>
/**
 * main - Prints number between 0 to 9 and letters between a to f.
 *
 * *Return: 0 (Success)
 */
int main(void)
{
	int num;
	char letter;

	for (num = 0; num <= 9; num++)
		putchar((num % 10) + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');
	return (0);
}
