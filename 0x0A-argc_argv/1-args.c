#include <stdio.h>
#include "main.h"
/** 
 * main - Program that prints the number of arguments passed into it
 * @argc: Represents the number of things we entered into the command prompt when running our executable
 * @argv: An array of strings
 * Return: 0
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("Number of arguments: %d\n", argc - 1);
	return (0);
}
