#include <stdlib.h>
#include <stdio.h>
/**
 * mul - function
 * @argc: number of inputs
 * @argv: inputs to multiply
 * Return: Always 0 (success)
 */
int mul(int argc, char *argv[])
{

	int result;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	result = (atoi(argv[1])) * (atoi(argv[2]));

	printf("%d\n", result);

	return (0);
}
