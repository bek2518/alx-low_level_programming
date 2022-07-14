#include "main.h"

/**
 * reverse_array - reverses the array of integers
 * @a: array of integers to reverse
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n; i++)
	{
		n--;
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
