#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the program
 * @argc: count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (success)
 */ 
int main(int argc, char *argv[])
{
/*Declearing variables*/
int count = 0;

if (argc > 0)
{
/*WHILE -print each argurments*/
while (count < argc)
{
printf("%s\n", argv[count]);
count++;
}
}
return (0);
}
