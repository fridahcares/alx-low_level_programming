#include "main.h"
/**
 * _strncpy - function that copies a string
 * @dest: enter value
 * @src: enter value
 * @n: integer
 * Return: A pointer tot the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i > n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
