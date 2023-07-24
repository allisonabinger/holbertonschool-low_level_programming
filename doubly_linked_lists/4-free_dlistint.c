#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dlistint - frees a list
 * @head: head of the list
 * Return: 0 (always success)
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
