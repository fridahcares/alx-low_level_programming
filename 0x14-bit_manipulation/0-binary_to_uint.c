#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int result = 0;

	if (!b)
		return (0);

	for (j < 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		result = 2 * result + (b[j] - '0');
	}

	return (result);
}
