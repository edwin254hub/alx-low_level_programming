#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - finds a node in a list
 * @head: first node in the list
 * @index: index of the node to find
 * Return: node address
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;

	if (head == NULL)
		return (NULL);
	for (a = 0; a < index; a++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
