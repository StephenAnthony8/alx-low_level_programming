#include "main.h"
#include <stdlib.h>
/**
 * _strdup - copies a string to a new memory address
 * @str: string to be copied
 * Return: pointer to copied string
 */
char *_strdup(char *str)
{
	int i, len;
	char *arr;

	i = len = 0;
	while (str[len] != '\0')
		len++;
	arr = malloc(sizeof(char) * len);
	if (str != NULL && arr != NULL)
		while (i < len)
		{
			arr[i] = str[i];
			i++;
		}
	else
		return (0);
	return (arr);
}
