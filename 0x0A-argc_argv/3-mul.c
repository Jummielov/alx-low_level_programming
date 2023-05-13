#include <stdio.h>
#include "main.h"
/**
 * main - Program that that multiplies two numbers
 * _atoi - converts the string argument to an integer
 * @argc: Number of things we entered into the command prompt
 * @argv: Array of strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int _atoi(char *s);

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", _atoi(argv[1]) * _atoi(argv[2]));
	return (0);
}
