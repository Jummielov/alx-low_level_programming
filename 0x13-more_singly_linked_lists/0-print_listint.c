#include <stdio.h>
#include "list.h"
/*
 * Write a function that prints all the elements of a listint_t list.
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}

