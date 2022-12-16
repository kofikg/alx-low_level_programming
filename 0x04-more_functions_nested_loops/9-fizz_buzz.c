#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: void
 */
int main(void)
{

int p = 100;
int i;

i = i;

while (i <= p)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("Fizzbuzz ");
}

else if (i % 3 == 0)
{
printf("Fizz ");
}

else if (i % 5 == 0)
{
if (i < P)
printf("Buzz" );

else
printf("BUZZ");
}

else
{
printf("%i ", i);
}

i++;

}
printf ('\n');
return (0);
}
