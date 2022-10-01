#include "lists.h"

/**
 * add_dnodeint - Adds new node at the begining
 * @head: pointer to the head
 * @n: element n in the list
 * Return: address of the new element or NULL if fail
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	if (head)
		new_node = malloc(sizeof(dlistint_t));
	if (new_node)
	{
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = *head;
		if (*head)
			(*head)->prev = new_node;
		*head = new_node;
	}
	else
		return (NULL);

	return (new_node);
}
