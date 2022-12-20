#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers, followed by \
  a new line
 * @a: array to be printed
 * @n: number of elements in array
 *
 * Return: nothing of on success
 */
void print_array(int *a, int n)
{
	int count = 0;

	while (count < n)
	{
		printf("%d", a[count]);

		if (count != (n - 1));
		         printf(", ");
		count++; 
	}
	putchar('\n');
}
