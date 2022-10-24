#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the first node of the list
 * Return: data of deleted head
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int node_num;

	if (!head || !*head)
		return (0);

	node_num = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (node_num);
}
