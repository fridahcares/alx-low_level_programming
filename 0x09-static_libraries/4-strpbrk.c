#include <stdio.h>
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string being checked
 * @accept: string bytes gotten from
 * Return: a pointer or null
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;
	}
	return ('\0');
}
