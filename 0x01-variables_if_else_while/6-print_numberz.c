#include <stdio.h>
/**
 * main - main block
 * Description: prints all single digit number of base 10
 * starting from 0, followed by new line.
 * Return: always 0 (success)
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		c++;

	}

	putchar('\n');
	return (0);
i}
