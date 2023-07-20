#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h> 
/**
 * dlistint_len - function that returns the number of elements in a linked list
 * @h: pointer to the head of list
 * Return: number of elements in a linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}
	return (c);
}
