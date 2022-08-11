#include "lists.h"

/**
 * list_len - number of elements ina lined list_t list
 * @h: linked list
 * Return: number of elements 
 */
size_t list_len(const list_t *h)
{
	size_t elem = 0;

	while (h != NULL)
	{
		h = h->next;
		elem++;
	}
	return (elem);
}
