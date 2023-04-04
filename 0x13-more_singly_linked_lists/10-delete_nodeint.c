#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes node at index of listint_t list
 * @index: index of the node that should be deleted
 * @head: pointer to the list's first element
 * Return: 1 on success or -1 if otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a;
	listint_t *current, *previous;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}
	previous = NULL;
	current = *head;

	for (a = 0; a < index && current != NULL; a++)
	{
		previous = current;
		current = current->next;
	}
	if (current == NULL)
		return (-1);
	previous->next = current->next;
	free(current);

	return (1);
}
