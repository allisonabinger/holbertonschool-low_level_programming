#include "hash_tables.h" // Include your necessary header file here

/**
 * key_index - Calculates the index for a key in the hash table
 * @key: The key to calculate the index for
 * @size: The size of the hash table array
 *
 * Return: The index at which the key should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
 unsigned long int hash_value = hash_djb2(key); // Calculate the hash value using hash_djb2 function
 unsigned long int index = hash_value % size; // Calculate the index using modulo operation

 return index;
}
