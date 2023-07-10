#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: int input
 * @av: double pointer array
 * Return: NULL if ac == 0 or av == NULL
 */
char *argstostr(int ac, char **av)
{
	int i, n, r = 0, l;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	l = 0;

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (n = 0; av[i][n]; n++)
	{
		str[r] = av[i][n];
		r++;
	}
	if (str[r] == '\0')
	{
		str[r++] = '\n';
	}
	}
	return (str);
}
