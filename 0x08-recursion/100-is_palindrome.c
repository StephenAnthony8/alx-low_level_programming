#include "main.h"
#include <stdio.h>
/**
 * string_count - counts the number of elements in a string
 * Return: string count
 * @s: string length
 * @i: return value
 */
int string_count(char *s, int i)
{
	if (s[i] != '\0')
		i = string_count(s, i + 1);
	return (i);
}
/**
 * string_bool - checks whether the string is a palindrome or not
 * @s: string
 * @i: max string length
 * @j: string midpoint
 * @k: initial string starting point
 * Return: return value
 */
int string_bool(char *s, int i, int j, int k)
{
	int rtn;

	rtn = 0;
	if ((i == j) && (s[i] == s[k]))
	{
		rtn = 1;
		return (rtn);
	}
	else if (i > j)
	{
		rtn = string_bool(s, i - 1, j, k + 1);
	}
	return (rtn);
}

/**
 * is_palindrome - returns the palindrome status of a string
 * @s: string
 * Return: palindrome status
 */
int  is_palindrome(char *s)
{
	int i, j, k;

	k = i = 0;
	if (s[0] == '\0')
		return (1);
	i = string_count(s, i) - 1;
	if (i % 2 !=  0)
	{
		j = (i / 2) + 1;
	}
	else if (i % 2 == 0)
	{
		j = (i / 2);
	}
	return (string_bool(s, i, j, k));
}
