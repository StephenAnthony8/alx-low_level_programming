#include "main.h"
/**
 * string_toupper - changes all lowercase to uppercase in a string
 * @n: string
 * Return: returns uppercase string
 */
char *string_toupper(char *n)
{
	int i;

	while (n[i] != '\0')
	{
		if ((n[i] >= 'a') && (n[i] <= 'z'))
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}