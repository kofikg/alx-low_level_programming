#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Description: prints all singles digit number of base 10
 * starting from 0, followed by a new line
 * return: always 0 (success)
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
	        c--;
	}

	putchar('\n');
	return (0);
}

