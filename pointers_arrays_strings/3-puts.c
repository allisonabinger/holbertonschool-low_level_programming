#include "main.h"
#include <stdio.h>
/**
 * _puts - prints the string, followed by new line, to the stdout
 * @str: string name
 * Return: always 0 (success)
 */
void _puts(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
