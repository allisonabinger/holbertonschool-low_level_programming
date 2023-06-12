#include "main.h"
/**
 * _strstr - finds the first occurrence of the substring needle in haystack
 * @needle: string to find
 * @haystack: string to examine
 * Return: pointer to beginning of substring or NULL if not
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; *haystack != '\0'; i++)
	{
		for
