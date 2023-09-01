#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *byte = (char *) &num;

	/*if the least signifcant byte contans 1, it s a litte endian*/

	return (*byte);
}
