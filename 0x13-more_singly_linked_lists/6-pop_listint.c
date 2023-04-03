#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the first element of a singly linked list
 * @head: a pointer to linked list
 * Return: an integer (successs)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int node;

	if (*head == NULL)
		return (0);
	temp = *head;
	*head = temp->next;
	node = temp->n;
	free(temp);
	return (node);
}

