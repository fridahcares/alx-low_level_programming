#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: charater being checked
 * Return: 1 if greater than, 0 if zero and -1 if less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
