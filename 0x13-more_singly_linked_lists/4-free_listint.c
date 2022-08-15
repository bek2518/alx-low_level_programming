#include "lists.h"

/**
 * free_listint - frees linked list
 * @head: head
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
