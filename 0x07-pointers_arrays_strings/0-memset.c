#include <stdio.h>
/**
 * _memset - function that fills memory with a constant byte
 * @s: address of memory to be filled
 * @b: the desired value
 * @n: number of bytes
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
