#include <stdio.h>
#include <stdlib.h
/**
 * print_list - prints all the elements of a list_t list
 * @h: head pointer
 * Return: size_t amount of elements
 */
size_t print_list(const list_t *h)
{
	size_t c = 0;

	struct node *ptr;

	ptr = h;

	if (h == NULL)
		printf("[0] (nil)");
	while (ptr != NULL)
	{
		c++;
		ptr = ptr->next;
	}

	return (0);
