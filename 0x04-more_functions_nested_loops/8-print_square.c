#include "main.h"

/**
 *  print_square - function that prints a square
 *  @size: is the size of the square
 *  @#; represents the square to be printed
 *  Return: 0
 */
void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
			_putchar('#');
			}
			_putchar('\n');
		}
	}
}
