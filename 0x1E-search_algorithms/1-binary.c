#include "search_algos.h"

/**
 * binary_search - searches for value in an array of integers
 * using binary search algorithm
 * @array: pointer to the first element of the array to search
 * sorted in ascending order
 * @size: size of the array
 * @value: value to search for
 * Return: first index where value is located
*/

int binary_search(int *array, size_t size, int value)
{
	int left, right, middle, i;

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i < right)
				printf("%d, ", i);
			else
				printf("%d\n", i);
		}
		middle = (left + right) / 2;
		if (array[middle] == value)
		{
			return (middle);
		}
		else if (array[middle] < value)
		{
			left = middle + 1;
		}
		else
		{
			right = middle - 1;
		}
	}
	return (-1);
}
