#include <unistd,h>

/**
 * _putchar - writes character c to stdout
 * @c: char to the printed
 * Return: on success 1
 */
int -putchar(char c)
{
	return (write(1, &c, 1));
}
