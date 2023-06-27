#include "main.h"
#include <stdio.h>
/**
 * _atoi - function that convert a string to an integer
 * @s: string to be converted
 * Return: 0
 */
int _atoi(char *s)
{
	int i = 0;
	int result = 0;
	int sign = 1;
	int f = 0;

	while (s[i])
	{
	if (s[i] == 45)
	{
		sign *= -1;
	}
	while (s[i] >= 48 && s[i] <= 57)
	{
		f = 1;
	result = (result * 10) + (s[i] - 48);
	i++;
	}
	if (f == 1)
	{
	break;
	}
	i++;
	}
	result *= sign;
	return (result);
}
