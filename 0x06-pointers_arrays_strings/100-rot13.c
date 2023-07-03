#include "main.h"
/**
 * rot13 - encodes and decodes string using the rot13 cipher
 * @n: string to be encoded/decoded
 * Return: returns converted string
 */
char *rot13(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		while (n[i] >= 65 && n[i] <= 122)
		{
			if (((n[i] >= 'N') && (n[i] <= 'Z')) || ((n[i] >= 'n') && (n[i] <= 'z')))
				n[i] = n[i] - 26;
			n[i] = n[i] + 13;
			break;
		}
		i++;
	}
	return (n);
}
