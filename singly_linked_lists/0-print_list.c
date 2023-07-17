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

	if (h == NULL)
		printf("[0] (nil)\n");
	while (h != NULL)
	{
		printf("[%u] %s\n" h->, h->str);
		h = h->next;
		c++
	}

	return (0);
