#include "holberton.h"

/**
 * _strlen_recursion - recursive function that returns the length of a string
 * @s: pointer to input string
 *
 * Return: integer lenght of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
