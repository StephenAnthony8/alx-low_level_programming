#include "main.h"
#include <stdlib.h>
/**
 *
 */
char **strtow(char *str)
{
	int cc, i, j, k, wc;
	char **arr;
	
	wc = 0;
	for (i = 0;str[i] != '\0'; i++)
	{
		for (; (str[i] == ' ' && str[i] != '\0'); i++)
		for (; (str[i] != ' ' && str[i] != '\0'); i++)
		wc++;
		if (str[i + 1] == '\0' && str[i] == ' ')
			wc--;
	}
	arr = malloc(sizeof(char *) * (wc + 1));
	if (arr == NULL)
		return (0);
	for (i = 0;i <= wc + 1; i++)
		for (j = 0;str[j] != '\0'; i++)
		{
			for (;(str[j] == ' ' && str[j] != '\0');j++)
			cc = 0;
			for (; (str[j] != ' ' && str[j] != '\0'); j++)
				cc++;
			if (cc != 0)
			{
				j -= cc;
				arr[i] = malloc(sizeof(char) * (cc + 1));
				if (arr[i] == NULL)
					return (0);
				k = 0;
				for (;(str[j] != ' ' || str[j] != '\0'); j++)
				{
					arr[i][k] = str[j];
					k++;
				}
			}
		}
	return (arr);
}
