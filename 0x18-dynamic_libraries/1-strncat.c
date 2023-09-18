#include "main.h"
/**
 * _strncat - concantenates two strings
 * @dest: string to be concantenated to
 * @src: string to concantenate
 * @n: concantenate count
 * Return: concantenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	j = i = 0;
	while (dest[i] != '\0')
		i++;
	if (dest[i] == '\0')
	{
		while (n != 0)
		{
			dest[i] = src[j];
			if (src[j] != '\0')
			{
				n--;
				i++;
				j++;
			}
			else
				break;

		}
		dest[i] = '\0';
	}
	return (dest);
}
