#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: character being checked
 * Return: string in reverse
 */
void rev_string(char *s)
{
	int length;
	int i;

	while  (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (i = length; i < 0; i--)
	{
		_putchar(*s);
		s--;
	}
}
