#include "lists.h"

/**
 * add_nodeint - adds new node at the begining of listint_t
 * @head: head
 * @n: elements
 * Return: address of the null element or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
