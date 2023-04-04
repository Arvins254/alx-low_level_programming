#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - delete the head node of a linked list
 * @head: pointer to 1st element in the linked list
 * Return: data inside the elements that was deleted
 * or 0 incase the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (!head || !*head)
		return (0);
	i = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (i);
}
