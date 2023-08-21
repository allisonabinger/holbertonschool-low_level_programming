#include "search_algos.h"
/**
* linear_search - searchs for value in array of sorted integers
* @array: array of integers
* @size: number of elements in array
* @value: value to find
* Return: index where value is present, or -1 if value is not present
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	while(i < size)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			return (i);
		}
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i++;
	}
	return (-1);
}