#include "main.h"

int find_strlen(char *s);
int check_palidrome(char *s, int len, int index);
int is_palidrome(char *s);

/**
 * find_strlen - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int find_strlen(char *s)
{
int len = 0;
if (*(s + len))
{
