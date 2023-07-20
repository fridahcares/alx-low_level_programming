#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number to be summed
 * ...: variable number of parameters to calculate the sum
 * Return: if n == 0 - 0.
 * otherwise sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum;

	va_start(args, n);

	sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);
	return (sum);
}
