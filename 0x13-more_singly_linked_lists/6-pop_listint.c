#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: list address
 * Return: the head node’s data (n), and 0 if linked list is empty
 */

int pop_listint(listint_t **head)
{
	int value = 0;
	listint_t *tmp;

	if (*head == NULL)
		return (value);
	tmp = *head;
	value = tmp->n;
	free(*head);
	*head = tmp->next;

	return (value);
}
