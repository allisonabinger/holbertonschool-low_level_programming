#include "hash_tables.h"
/**
	* hash_table_set - adds or updates an element in the hash table
	* @ht: hash tablet to add/update the element in
	* @key: key of the element
	* @value: value of the element
	* Return: 1 if successful, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	unsigned long int index = key_index((unsigned char *)key, ht->size);

	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (0);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array(index);
	ht->array[index] = new_node;

	return (1);
}
