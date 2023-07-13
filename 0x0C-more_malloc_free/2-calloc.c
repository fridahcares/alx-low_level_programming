#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * *_memset - fills memory with a constant byte
 * @s: memory to be filled
 * @c: character to be copied
 * @n: number of times to be copied
 * Return: pointer to memory of s
 */
char *_memset(char *s, char c, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = c;
	return (s);
}
/**
 * *_calloc - function that allocates memory for an array
 * @nmemb: number of array of elements
 * @size: size of bytes
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
