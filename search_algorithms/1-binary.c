#include "search_algos.h"
/**
* print_array - prints array of integers, designed for binary serach
* @array: array
* @left: low index
* @right: high index
*/
void print_array(int array[], size_t left, size_t right)
{
	printf("Searching in array: ");

	while (left <= right)
	{
		printf("%i", array[left]);
		if (left != right)
		{
			printf(", ");
		}
		left++;
	}
	printf("\n");
}

/**
* binary-search - searches for value in sorted array
* @array: pointer to first element
* @size: size of array
* @value: integer to find
* Return: index where value is located, or -1 if value isnt found
*/
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		print_array(array, left, right);
		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);

		else if (array[mid] < value)
			left = mid + 1;

		else
			right = mid - 1;
	}

		return (-1);
}
