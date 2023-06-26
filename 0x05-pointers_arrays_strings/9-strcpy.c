#include "main.h"
/**
 * _strcpy - function that copies the string pointed to by src
 * including the terminating null byte (\0)
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i, x;

	while ((*src + i) != '\0')
	{
		i++;
	}
	for ( ; x < i ; x++)
	{
		dest[x] = src[x];
	}
	dest[i] = '\0';
	return (dest);
}
