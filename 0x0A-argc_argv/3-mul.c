#include <stdio.h>
#include "main.h"
/**
 * main - Program that that multiplies two numbers
 * @argc: Number of things we entered into the command prompt
 * @argv: Array of strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
