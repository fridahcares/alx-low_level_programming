#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory containing a copy of the string
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *duplicate; /*contains copied string*/
	int i, r = 0; /*to calculate string length*/

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	duplicate = malloc(sizeof(char) * (i + 1));
	if (duplicate == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		duplicate[r] = str[r];

	return (duplicate);
}
