#include "main.h"
/**
 * leet - function that encodes a string into 1337
 * @str: string to be checked
 * Return: encoded string
 */
char *leet(char *str)
{
	char *ptr = str;

	char *leet_chars = "AEOTL";
	char *leet_replacements = "43071";

	for (; *ptr != '\0'; ptr++)
	{
		int i;

		for (i = 0; leet_chars[i] != '\0'; i++)
		{
			if (*ptr == leet_chars[i] || *ptr == leet_chars[i] + 32)
			{
				*ptr = leet_replacements[i];
				break;
			}
		}
	}
	return (str);
}
