#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: listint_t pointer
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
