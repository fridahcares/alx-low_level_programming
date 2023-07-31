#include "lists.h"
/**
 * print_listint_safe - function that prints a listint_t linked list
 * @head: a pointer to the head of the listint_t
 * Return: number of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t count = 0;

	tortoise = head;
	hare = head;

	while (tortoise && hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare)
		{
			printf("-> [%p] %d\n", (void *)tortoise, tortoise->n);
			printf("-> [%p] %d\n", (void *)hare, hare->n);
			exit(98);
		}

		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		count++;
	}
	return (count);
}
