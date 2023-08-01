#include "lists.h"
/**
 * free_listint_safe - function that frees a listint_t list
 * @h: a pointerpointing to the first node in the list
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodes = 0;
	int b; /*stores the difference */
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		b = *h - (*h)->next;
		if (b > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			nodes++;
		}
		else
		{
			free(*h);
			*h = NULL;
			nodes++;
			break;
		}
	}
	*h = NULL;
	return (nodes);
}
