#include <stdio.h>
#include "main.h"
/** 
 * main - Program that prints its name, followed by a new line.
 * @argc: Represents the number of things we entered into the command prompt when running our executable
 * @argv: An array of strings
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("Print the name of the program: %s\n", argv[0]);
	return (0);
}




