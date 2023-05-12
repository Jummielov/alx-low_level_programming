#include <stdio.h>
#include "main.h"
/**
 * main - Program that prints the number of arguments passed into it
 * @argc: Number of things we entered into the command prompt
 * @argv: Array of strings
 * Return: 0
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
