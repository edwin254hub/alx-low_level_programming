#include "lists.h"

/**
 * listint_len - returns the number of elments in a linked list
 * @h: linked list od type listint_t to traverse
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t  num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
