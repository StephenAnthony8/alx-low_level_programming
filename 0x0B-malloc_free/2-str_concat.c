#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: joined string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int arr_l, i, j, k, size;
	char *arr;

	size = k = j = i = arr_l = 0;
	if (s1 != NULL)
		while (s1[arr_l] != '\0')
			arr_l++;
	       size += (sizeof(char) * arr_l);
	arr_l = 0;
	if (s2 != NULL)
		while (s2[arr_l] != '\0')
			arr_l++;
	size += (sizeof(char) * arr_l) + 1;
	arr = malloc(size);
	if (arr != NULL)
	{
		for (; i < size; i++)
		{
			if (s1 != NULL)
				if (s1[j] != '\0')
				{
					arr[i] = s1[j];
					j++;
					continue;
				}
			if (s2 != NULL)
				if (s2[j] != '\0')
				{
					arr[i] = s2[k];
					k++;
				}
		}
		arr[i] = '\0';
	}
	return (arr);
}
