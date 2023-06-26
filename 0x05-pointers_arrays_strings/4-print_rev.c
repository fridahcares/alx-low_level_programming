#include "main.h"
/**
 * print_rev - function that prints a string, in reverse
 * @s: character being checked
 * Return: string in reverse
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	while (*s != '\0')
	{
	length++;
	s++;
	}
	s--;
	for (i = length; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
