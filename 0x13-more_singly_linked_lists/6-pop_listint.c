#include "lists.h"
/**
 * pop_listint -  function that deletes the head
 * node of a listint_t linked list
 * @head: pointer to the first element of the linked list
 * Return: head node’s data (n) or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (!head || !*head)
		return (0);


	data = (*head)->n;
	temp = (*head)->next;

	free(*head);
	*head = temp;

	return (data);
}
