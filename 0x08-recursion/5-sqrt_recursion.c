#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: integer being checked
 * Return: -1 If n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - calculates natural square root of a number
 * @n: integer being checked
 * @i: iterate number
 * Return: the natural square root
 */
int actual_sqrt_recursion(int n, int i)
{
	int square = i * i;

	if (square > n)
		return (-1);
	if (square == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
