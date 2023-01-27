#include "search_algos.h"

/**
 * linear_search - searches for value in an array of integers
 * using linear search algorithm
 * @array: pointer to the first element if the array to search
 * @size: size of the array
 * @value: value to search
 * Return: first index where value is located
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
