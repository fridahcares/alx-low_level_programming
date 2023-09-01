#include "main.h"

/**
 * binary_to_uint - function that converts binary to unsigned int
 * @b: pointer pointing to a string of 0 and 1 chars
 *
 * Return: converted number or 0 if there is one or more chars in the string b
 * that is not 0 or 1 or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)/*iterates through the characters in the string*/
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		result = 2 * result + (b[i] - '0');
	}
	return (result);
}
