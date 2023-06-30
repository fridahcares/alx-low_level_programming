#include "main.h"
/**
 * rot13 - function that encodes a string using rot13
 * @str: string being checked
 * Return: encoded string
 */
char *rot13(char *str)
{
	char *result = str;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'A' && str[i] <= 'M') || (str[i] >= 'a' && str[i] <= 'm'))
		{
			result[i] += 13;
		}
		else if
			((str[i] >= 'N' && str[i] <= 'Z') || (str[i] >= 'n' && str[i] <= 'z'))
		{
			result[i] -= 13;
		}
	}
	return (result);
}
