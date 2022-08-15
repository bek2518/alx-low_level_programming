#include "lists.h"

/**
 * free_listp - frees linked list
 * @head: head
 */
void free_listp2(listp_t **head)
{
	listp_t *temp;
	listp_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe -frees listint_t linked list
 * @head: head
 * Return: size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nnode = 0;
	listp_t *hptr, *new, *add;
	listint_t *curr;

	hptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);
		new->p = (void *)*h;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&hptr);
				return (nnode);
			}
		}
		curr = *h;
		*h = (*h)->next;
		free(curr);
		nnode++;
	}
	*h = NULL;
	free_listp2(&hptr);
	return (nnode);
}
