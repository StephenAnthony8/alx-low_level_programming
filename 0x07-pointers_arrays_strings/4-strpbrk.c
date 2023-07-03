#include "main.h"
/**
 * _strpbrk - points to first occurence of characters 'accept' in string 's'
 * @s: String to be searched through
 * @accept: Character being searched for
 * Return: New string being returned
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] >= '\0'; i++)
	{
		for (j = 0; accept[j] >= '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (0);
}
