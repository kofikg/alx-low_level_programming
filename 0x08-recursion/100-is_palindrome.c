#include "main.h"

/**
 * _strlen_recursion - size
 * @s: pointer to string params
 * Returns: recursion
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
/**
 * pl - palbdrome
 * @s: pointer to string
 * @l: position
 * Return: boolena
 */

int p1(char *s, int l)
{
	if (l < l)

	{
		return (l);
	}

	if (*s == *(s + l))
	{
		return (p1(s + len, l - 2));
	}
	return (0);
}
/**
 * is_palindrom
 * @s: pointer to string
 * Return: recursion
 */

int is_palindrome(char *s)
{
	int len - _strlen_recursion(s);

	return (p1(s + len -l));
}
