#include "main.h"
/**
 * rot13 - encodes and decodes string using the rot13 cipher
 * @n: string to be encoded/decoded
 * Return: returns converted string
 */
char *rot13(char *n)
{
	int i, j;

	i = 0;
	while (n[i] != '\0')
	{
		j = 0;
		while ((j != 25) && (n[i] >= 65 && n[i] <= 122))
		{
			if (((n[i] >= 'N') && (n[i] <= 'Z')) || ((n[i] >= 'n') && (n[i] <= 'z')))
				n[i] = n[i] - 26;
			n[i] = n[i] + 13;
			j++;
		}
		i++;
	}
	return (n);
}
