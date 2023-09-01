#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: the number
 * @m: second number
 *
 * Return: number of bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int exclusive = n ^ m;
	unsigned long int current;
	int i, count = 0;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
