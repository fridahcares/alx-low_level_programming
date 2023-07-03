#include <stdio.h>
/**
 * _strchr - function that locates a character in a string
 * @c: character being located
 * @s: the string
 * Return: a pointer to the first occurrence of the
 * character or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
