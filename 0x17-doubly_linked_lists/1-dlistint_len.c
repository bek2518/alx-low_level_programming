#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: head
 * Return: length
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
