#include "main.h"
/**
 * _strchr - points to the first occurence of the character 'c' in string 's'
 * @s: String to be searched through
 * @c: Character being searched for
 * Return: New string being returned
 */
char *_strchr(char *s, char c)
{
	int i;
	char *k;

	i = 0;
	k = '\0';
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			k = &s[i];
			break;
		}
		i++;
	}
	return (k);
}