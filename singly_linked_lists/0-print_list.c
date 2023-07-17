#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: head pointer
 * Return: size_t amount of elements
 */
size_t print_list(const list_t *h)
{
	size_t c = 0;

	if (!h->str)
		printf("[0] (nil)\n");
	else
	{	
		while (h != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			c++;
		}
	}
	return (c);
}
