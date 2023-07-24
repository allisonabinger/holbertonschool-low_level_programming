#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_dlistint - returns the sum of all the data (n) in a list
 * @head: head of the list
 * Return: sum (int) of the data
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
