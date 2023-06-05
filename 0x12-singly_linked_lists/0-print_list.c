#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/*
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 * @print_list: Print all the elements in a list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h);
{

	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	printf("\n");
	return (s);
}
