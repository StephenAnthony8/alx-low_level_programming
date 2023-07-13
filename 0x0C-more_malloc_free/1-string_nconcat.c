#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string dest
 * @s2: string src
 * @n: string2 length
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int count, i, j;
	char *arr;

	j = i = 0;
	if (s1 != NULL)
		while (s1[i] != '\0')
			i++;
	if (s2 != NULL)
		while (s2[j] != '\0')
			j++;
	if (n >= j)
		count = sizeof(char) * (i + j + 1);
	else
		count = sizeof(char) * (i + n + 1);
	arr = malloc(count);
	if (!arr)
	{
		free(arr);
		return (0);
	}
	j = i = 0;
	if (s1 != NULL)
		for (; s1[i] != '\0'; i++)
			arr[i] = s1[i];
	if (s2 != NULL)
		for (; i < count - 1; i++, j++)
			arr[i] = s2[j];
	arr[i] = '\0';
	return (arr);
}
