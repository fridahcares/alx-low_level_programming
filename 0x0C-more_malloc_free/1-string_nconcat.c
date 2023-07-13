#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * *string_nconcat - function that concatenates two strings
 * @s1: string to be concatenated
 * @s2: stringto be concatenated to
 * @n: number of bytes
 * Return: pointer to the allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int concat_len, len1 = 0, len2 = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
		concat_len = len1 + len2;
	else
		concat_len = len1 + n;
	concat = malloc((concat_len + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);
	strcpy(concat, s1);
	strncat(concat, s2, n);
	concat[concat_len] = '\0';
	return (concat);
}
