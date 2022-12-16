#include "main.h"
/**
 * print_diagonal - prints diagonal line n time
 * @n: times diagonal line is printed.
 * Return: no return.
 */
void print_diagonal(int n)
{
	int i, j;
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar('_');
		}
		_putchar(92);
		if (j < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}