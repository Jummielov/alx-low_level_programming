#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program that adds positive numbers.
 * @argc: Number of things we entered into the command prompt
 * @argv: Array of strings
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int a, b, add = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[a]);
	}
	printf("%d\n", add);
	return (0);
}
