#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - functino that returns the number of elements in a linked list_t
 * @h: pointer to the list
 * Return: number of the elements in a linked list
 */
size_t list_len(const list_t *h)
{
	size_t c = 0;

	while (h)
	{
		c++;
		h = h->next;
	}
	return (c);
}
