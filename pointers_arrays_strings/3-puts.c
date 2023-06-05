/**
 * _puts - prints the string, followed by new line, to the stdout
 * @str: string name
 * Return: always 0 (success)
 */
#include <stdio.h>
void _puts(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i++;
	}
	printf('\n');
}
