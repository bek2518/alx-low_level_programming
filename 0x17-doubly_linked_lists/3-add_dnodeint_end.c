#include "lists.h"

/**
 * add_dnodeint_end - This function adds a new node at the end
 * of a dlistint_t list
 * @head: The double pointer to the head of the list
 * @n: The int value of element n in the new node
 * Return: The address of the new element, or NULL if it failed
 **/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end_node = NULL, *tmp = NULL;

	if (head)
		end_node = malloc(sizeof(dlistint_t));
	for (tmp = *head; tmp && tmp->next; tmp = tmp->next)
		;

	if (end_node)
	{
		end_node->n = n;
		end_node->next = NULL;
		end_node->prev = tmp;
	}
	else
		return (NULL);
	if (!*head)
		*head = end_node;
	else
		tmp->next = end_node;

	return (end_node);
}
