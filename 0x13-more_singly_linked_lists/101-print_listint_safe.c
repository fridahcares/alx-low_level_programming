#include "lists.h"
#include <stdio.h>
size_t loped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 * looped_listint_len - counts number of nodes in linked list
 * @head: pointer to the head of listint_t
 * Return: 0 if the list is not looped
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t count = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				count++;
				tortoise = tortoise->next;
				hare = hare->next;
			}

			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				count++;
				tortoise = tortoise->next;
			}
			return (count);
		}
		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - function that prints a listint_t linked list
 * @head: a pointer to the head of the listint_t
 * Return: number of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count, index = 0;

	count = looped_listint_len(head);

	if (count == 0)
	{
		for (; head != NULL; count++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < count; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (count);
}
