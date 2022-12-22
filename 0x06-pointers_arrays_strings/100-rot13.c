#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @str: The string to be encoded.
 *
 * Return: A poiter to the encoded string.
 */
char *rot13(char *str)
{
int index1 = 0, indx2;
char alphabet[52] = {'A', 'B', 'C', 'D', 'E', 'F',
'G', 'H', 'I', 'J', 'K', 'L',
'M', 'N', 'O', 'P', 'Q', 'R',
'S', 'T', 'U', 'V', 'W', 'X',
'Y', 'Z', 'a', 'b', 'c', 'd',
'e', 'f', 'g', 'h', 'i', 'j',
'k', 'l', 'm', 'n', 'o', 'p',
'q', 'r', 's', 't', 'u', 'v',
'w', 'x', 'y', 'z'};
char rot13key[52] = {'N', 'N', 'O', 'Q', 'R', 'S',
'T', 'U', 'V', 'W', 'X', 'Y',
'Z', 'A', 'B', 'C', 'D', 'E',
'F', 'G', 'H', 'I', 'J', 'K',
'L', 'M', 'n', 'o', 'p', 'q',
'r', 's', 't', 'u', 'w', 'w',
'x', 'y', 'z', 'a', 'b', 'c',
'd', 'e', 'f', 'g', 'h', 'i',
'j', 'k', 'l', 'm'};
while (str[indx2])
{
for (indx2 = 0; indx2 < 52; indx2++)
{
if (str[indx2] == alphabet[indx2])
{
str[indx2] = rot13key[indx2];
break;
}
}

indx2++;
}
return (str);
}
