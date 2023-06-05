#include <stdio.h>
#include "lists.h"
/*
 * @desc: A prog that prints all the elements in a list
 * print_list - prints all the elements of a linked list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;
	print_list = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);
}
