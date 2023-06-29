#include "main.h"
/**
 *
 */
char *cap_string(char *n)
{
	char symbol[] = {',',';','.','!','?','"','(',')','{', '}', '\n'};
	int i, j, upper_val;
	i = 0;
	upper_val = 0;

	while (n[i] != '\0')
	{
		j = 0;
		while (symbol[j] != '\0')
		{
			if (n[i] == n[j])
				upper_val = 1;
			j++;
		}

		if (upper_val == 1)
			if (((n[i] >= 'a') && (n[i] <= 'z')) && ((n[i -1] != 'A') && (n[i - 1] != 'Z')))
			{
				n[i] = n[i] - 32;
				upper_val = 0;
			}
		if ((n[i] >= 'A') && (n[i] <= 'Z'))
			upper_val = 0;
		i++;
	}
	return (n);

}
