#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: returns the difference
 */
int _strcmp(char *s1, char *s2)
{
	int i, j, ret;

	ret = j = i = 0;
	while (s1[i] != '\0')
	{
		ret = ret + (s1[i] - '&');
		i++;
	}
	i = ret;
	ret = 0;
	while (s2[j] != '\0')
	{
		ret = ret + (s2[j] - '&');
		j++;
	}
	j = ret;
	ret = i - j;
	return (ret);
}
