#include "lists.h"

/**
 * listint_len - returns number of elements in
 * listint_t linked list
 * @h: head
 * Return: number of elements in linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
