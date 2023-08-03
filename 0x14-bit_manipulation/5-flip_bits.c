#include "main.h"
/**
 * flip_bits - function that returns the number of bits you
 * would need to flip to get from one number to another
 * @n: first integer
 * @m: second integer
 * Return: new number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, count = 0;
	unsigned long int xor_result = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}
	return (count);
}
