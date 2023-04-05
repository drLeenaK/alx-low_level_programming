#include "lists.h"

/**
 * free_listint2 - function that frees list, function that head set to NULL
 * @head: head node
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	while (*head != NULL)

	{
		tmp = *head;
		free(*head);
		*head = tmp->next;
	}
	*head = NULL;
}
