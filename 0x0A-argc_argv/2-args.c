#include <stdio.h>
#include "main.h"
/** 
 * main -  Program that prints all arguments it receives.
 * @argc: Represents the number of things we entered into the command prompt when running our executable
 * @argv: An array of strings
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[]__attribute__((unused)))
{
	int i;

	printf("argc = %d\n", argc);
	printf("What is in argv[]:\n");
	for (i = 0; i < argc; i++)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
	}
	return (0);
}
