#include "main.h"
/**
 * _memset - Fills a memory type with a constant byte
 * @s: array start
 * @b: value to fill memory area with
 * @n: number of buffers to fill
 * Return: Returns the modified string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (n != i)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
