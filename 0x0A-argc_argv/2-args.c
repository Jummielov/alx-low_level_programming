#include <stdio.h>
#include "main.h"
/**
 * main -  Program that prints all arguments it receives.
 * @argc:  The number of things we entered into the command prompt
 * @argv: An array of strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
