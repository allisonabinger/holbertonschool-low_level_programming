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

	for (i = 0; i != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
