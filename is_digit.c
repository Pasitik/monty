#include "monty.h"

/**
 * is_digit - Checks if a string represents a valid integer number.
 * @s: The string to check.
 * Return: 1 if the string is a valid number, 0 otherwise.
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (i == 0 && s[i] == '-' && s[i + 1])
		{
			i++;
			continue;
		}
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}

	return (1);
}
