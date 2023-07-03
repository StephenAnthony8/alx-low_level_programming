#include "main.h"
#include <string.h>
/**
 *
 */
char *_strchr(char *s, char c)
{
	int i, j; 
	char *nada = NULL;

	j = i = 0;
	while (s[i] != c)
	{
		if (s[i] == '\0')
			return (nada);
		i++;
	}
	while ((s[i] != '\0'))
	{
		s[j] = s[i];
		j++;
		i++;
	}
	if (s[i] == '\0')
		s[j] = '\0';

	return (s);

}
