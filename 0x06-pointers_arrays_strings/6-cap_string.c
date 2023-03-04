#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	if (islowe(str[0]))
	{
	str[0] -= 32;
	}
	for (int i = 0; str[i] != '\0' ; i++)
	{
	if str[i] == '' && islower(str[i = 1])
		str[i + 1] -= 32;
	}
	return (str);
}
