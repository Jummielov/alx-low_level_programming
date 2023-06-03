#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/*
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{

	size_t Prntn = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		Prntn++;
	}

	return (Prntn);
}
