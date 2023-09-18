#include "main.h"
/**
 * _strcat - appends 'src' string to 'dest' string
 * @dest: string to append to
 * @src: string being appended
 * Return: Returns a string value
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (dest[i] != '\0')
		i++;
	if (dest[i] == '\0')
	{
		while (j >= 0)
		{
			dest[i] = src[j];
			if (src[j] != '\0')
			{
				i++;
				j++;
			}
			else
				return (dest);
		}
	}
	return (dest);
}
