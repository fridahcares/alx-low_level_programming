#include "main.h"
/**
 * string_toupper - function that changes all
 * lowercase letters of a string to uppercase
 * @str: string to be checked
 * Return: string with lower case letters in upper
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 'a' + 'A';
		}
		ptr++;
	}
	return (str);
}
