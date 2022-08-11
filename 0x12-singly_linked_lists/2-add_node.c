#include "lists.h"

/**
 * add_node - adds new node at the begining of list_t
 * @head: first node
 * @str: string to store
 * Return: address of the new element or
 * NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t nchar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;
	new->len = nchar;
	new->next = *head;
	*head = new;

	return (*head);
}
