#include <stdio.h>
/**
 * _memcpy - function that copies memory area
 * @dest: memory to be copied to
 * @src: memory being copied from
 * @n: bytes
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	while (i < r)
	{
		dest[r] = src[r];
		r++;
		n--;
	}
	return (dest);
}
