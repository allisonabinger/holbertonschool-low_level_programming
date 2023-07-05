#include <stdio.h>
/**
 * main - prints the name of the file it was compiled from, follow by /NL
 * Return: always 0
 */
int main(void)
{
	char *filename = __FILE__;

	printf("%s\n", filename);
	return (0);
}
