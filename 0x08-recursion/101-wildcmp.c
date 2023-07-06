#include "main.h"
#include <stdio.h>
/**
 * wildcmp_count - returns the state of the strings
 * @s1: initial string
 * @s2: comparison string
 * @i: s1 string count
 * @j: s2 string count
 * Return: string comparison status
 */
int wildcmp_count(char *s1, char *s2, int i, int j)
{
	int k = 0;

	if ((s1[i] == '\0') && (s2[j] == '\0'))
		return (1);

	else if (s1[i] == s2[j])
		k = wildcmp_count(s1, s2, i + 1, j + 1);

	else if (s2[j] == '*')
	{
		if (s2[j + 1] == '*')
			k = wildcmp_count(s1, s2, i, j + 1);
		else if (s2[j + 1] == '\0')
			return (1);
		else if ((s1[i + 1]) == (s2[j + 1]))
			k = wildcmp_count(s1, s2, i + 1, j + 1);
		else
			k = wildcmp_count(s1, s2, i + 1, j);
	}
	return (k);

}
/**
 * wildcmp - checks whether both strings
 * @s1: initial string
 * @s2: comparison string
 * Return: string comparison status
 */
int wildcmp(char *s1, char *s2)
{
	int i, j;

	j = i = 0;
	return (wildcmp_count(s1, s2, i, j));
}
