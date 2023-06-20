#include "main.h"
/**
 * print_alphabet_x10 - print 10 times the alphabet
 *
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	int i = 0, c;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
			_putchar('\n');
		}
		i++;
	}
}
