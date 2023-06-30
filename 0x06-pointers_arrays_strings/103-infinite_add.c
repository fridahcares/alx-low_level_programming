#include "main.h"
/**
 * infinite_add - function that adds two numbers
 * @n1: first number
 * @n2: other number
 * @r: r is the buffer that the function will use to store the result
 * @size_r: buffer size
 * Return: a pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0, sum = 0, i, j;

	while (n1[len1] != '\0')
		len1++;

	while (n2[len2] != '\0')
		len2++;
	if (len1 + 1 > size_r)
		return (0);
	i = len1 - 1;
	j = len2 - 1;

	r[size_r - 1] = '\0';

	while (i >= 0 || j >= 0 || carry != 0)
	{
		sum = carry;

		if (i >= 0)
			sum += n1[i--] - '0';

		if (j >= 0)
			sum += n2[j--] - '0';

		carry = sum / 10;
		r[--size_r] = (sum % 10) + '0';
	}
	return (&r[size_r]);
}
