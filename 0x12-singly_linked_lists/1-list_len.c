#include "lists.h"
/**
 * list_len - function that returns the number
 * of elements in a linked list_t list
 * @h: a pointer tio the linked list_t
 * Return: numnerof elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
