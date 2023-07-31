#include "lists.h"
/**
 * sum_listint -  function that returns the sum
 * of all the data (n) of a listint_t linked list
 * @head: the first node in the linked list
 * Return: the sun or 0 if the kist is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
