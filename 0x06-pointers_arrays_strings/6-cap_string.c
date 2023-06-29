#include "main.h"
/**
 * cap_string - Converts all Word beginnings to capital
 * @n: string to be formatted
 * Return: returns the formatted string
 */
char *cap_string(char *n)
{
	char symbol[] = {',', ';', '.', '?', '"', '(', ')', '{', '}'};
	int i, j, upper_val;

	upper_val = 1;
	i = 0;
	while (n[i] != '\0')
	{
		j = 0;
		while (symbol[j] != '\0')
		{
			if (n[i] == symbol[j])
				upper_val = 1;
			j++;
		}
		if (n[i] >= 9 && n[i] <= 33)
			upper_val = 1;

		if (i != 0 && (n[i - 1] >= 'A' && n[i - 1] <= 'Z'))
			upper_val = 0;
		else if (i != 0 && (n[i - 1] >= '0' && n[i - 1] <= '9'))
			upper_val = 0;

		if (upper_val == 1)
			if(n[i] >= 97 && n[i] <= 122)
			{
				n[i] = n[i] - 32;
				upper_val = 0;
			}
		i++;
	
	}
	return (n);
}
