#include "main.h"
/*
 * puts2 - prints every other character of a string, 
 * starting with first, followed by newline
 * @s: string input for the function
 * Return: Empty (output of function)
 */
void puts2(char *s)
{
	int a = 0;

	int i;

	while (str[a] != '\0')
	{
		a++;
	}

	for (i = 0; i < a ; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

