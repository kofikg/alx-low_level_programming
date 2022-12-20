#include "main.h"

/**
 *puts - prints every other character of a string, starting with the \
 first character, followed by new line.
* @str: string to be printed
*
* Return: nothing on success
*/
void puts2(char *str)
{
	int count = 0, i;

	while (*str)
	{
		count++;
		str++;
	}

	for (i = 0; i < count; i++)
		str--;

	for (i = 0; i < count; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}

	_putchar('\n');
}
