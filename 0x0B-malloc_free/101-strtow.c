#include "main.h"
#include <stdlib.h>
/**
 * char_count - counts the number of words/chars in a string/ substring
 * @str: string to be counted through
 * @i: initializing count
 * @flag: character/word option
 * Return: count
 */
int char_count(char *str, int i, int flag)
{
	int count, j, v;

	count = 0;
	if (i == 0)
		for (j = 0; str[j] != '\0'; j++)
		{
			if (str[j] == ' ')
				v = 0;
			else
			{
				v = 1;
				break;
			}
		}
	if (v == 0)
		return (count);
	for (; str[i] != '\0'; i++)
		if (str[i] >= '!' && str[i] <= 'z')
		{
			if (flag == 1)
				count++;
			if (str[i + 1] == ' ' || str[i + 1] == '\0')
			{
				if (flag == 1)
				{
					i++;
					break;
				}
				else
					count++;
			}
		}
		else if ((!(str[i] >= '!' && str[i] <= 'z')) && (flag == 1))
			count = 0;
	return (count);
}
/**
 * strtow - converts a string into a 2D array of words
 * @str: string to be converted
 * Return: 2D array of words
 */
char **strtow(char *str)
{
	int count, i, j, k;
	char **arr;

	j = 0;
	if (str == NULL)
		return (0);
	if (char_count(str, 0, 0) == 0)
		return (0);
	count = char_count(str, 0, 0);
	arr = malloc(sizeof(char *) * (count + 1));
	if (arr == NULL)
	{
		free(arr);
		return (0);
	}
	for (i = 0; i <= count; i++)
		for (; str[j] != '\0'; j++)
		{
			if (str[j] >= '!' && str[j] <= 'z')
			{
				count = j + char_count(str, j, 1);
				arr[i] = malloc(sizeof(char) * (count));
				if (arr[i] == NULL)
				{
					for (; i >=  0; i--)
						free(arr[i]);
					free(arr);
					return (0);
				}
				for (k = 0; j < count; j++, k++)
					arr[i][k] = str[j];
				arr[i][k] = '\0';
				break;
			}
		}
	arr[i] = '\0';
	return (arr);
}
