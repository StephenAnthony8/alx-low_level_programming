#include "main.h"
#include <stdio.h>
/**
 * rev_string - prints out a reversed string followed by a new line
 * @s: string printed out
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char k;

	while (s[i] != '\0')
		i++;
	i--;
	while (j < i)
	{
		k = s[j];
		s[j] = s[i];
		s[i] = k;

		i--;
		j++;
	}

}
