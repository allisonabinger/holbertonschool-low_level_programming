#include <stdlib.h>
#include <stdio.h>
/**
 * main - function
 * @argc: number of inputs
 * @argv: inputs to multiply
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{

	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	result = (atoi(argv[1])) * (atoi(argv[2]));

	printf("%d\n", result);

	return (0);
}
