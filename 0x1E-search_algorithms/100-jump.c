#include "search_algos.h"

/**
 * jump_search - searched for value in sorted array using jump search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: number of elements in array
 * Return: first index where value is located
*/
int jump_search(int *array, size_t size, int value)
{
	size_t start, end, jump, i;

	start = 0;
	end = sqrt(size);
	jump = sqrt(size);
	printf("Value checked array[%ld] = [%d]\n", start, array[start]);
	while (array[end] <= value && end < size)
	{
		start = end;
		end += sqrt(size);
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
		if (end > size - 1)
		{
			end = size;
		}
	}
	printf("Value found between [%ld] and [%ld]\n", start, start + jump);
	for (i = start; i < end; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}