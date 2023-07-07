#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * @c: character being checked
 * Return: 1 if c and 0 if otherwise
 */
int _isupper(int c)
{
	if (c <= 90 && c >= 65)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
