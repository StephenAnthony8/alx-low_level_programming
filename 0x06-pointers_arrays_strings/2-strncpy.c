#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: string to copy to
 * @src: string being copied
 * @n: number of elements to copy
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (n != 0)
	{
		dest[i] = src[i];
			n--;
		if (src[i] != '\0')
		{
			i++;
		}
		else
			continue;
	}
	return (dest);
}
