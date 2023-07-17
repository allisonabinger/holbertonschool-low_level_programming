#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node - adds new node at start of list
 * @head: dbl pointer to the list
 * @str: new string
 * Return: the address of the new node, or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int i = 0;

	while (str[i])
		i++;

	new = malloc(sizeof(list_t));

	if(!new)
		return (NULL);

	new->str = strdup(str);
	new->len = i;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
