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

	i = 0;
	len = 0;
	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;
	len++;
	arr = malloc(sizeof(char) * len);
	if (arr != NULL)
		while (i < len)
		{
			arr[i] = str[i];
			i++;
		}
	else
		return (NULL);
	return (arr);
}
