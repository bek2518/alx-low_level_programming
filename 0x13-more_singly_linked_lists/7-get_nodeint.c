#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of
 * listint_t linked list
 * @head: head
 * @index: index of the node
 * Return: nth node or NULL if doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	return (head);
}
