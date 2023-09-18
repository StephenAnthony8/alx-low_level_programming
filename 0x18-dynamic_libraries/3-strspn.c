#include "main.h"
/**
 * _strspn - Calculate the length of a prefix substring
 * @s: string
 * @accept: prefix substring
 * Return: Returns the byte size of the calculated prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int k;
	int i, j, l;

	k = 0;
	i = 0;
	l = 1;
	while ((s[i] != '\0'))
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				l = 1;
				k = k + sizeof(s[i]);
				break;
			}
			else
				l = 0;
			j++;
		}
		if (l == 0)
			break;
		i++;
	}
	return (k);
}
