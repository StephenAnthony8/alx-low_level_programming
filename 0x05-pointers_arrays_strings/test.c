#include "main.h"
/**
 * _atoi - returns a valid number or 0 if none are numbers
 * @s: String
 * Return: returns a value of 0 or a number
 */
int _atoi(char *s)
{
	int i = 0, j = 0, k = 0, l = 0, m = 1, n = 0;
	while (s[i] != '\0')
	{
		if ((s[i] == '+') || (s[i] == '-'))
		{
			if ((s[i + 1] >= '0') && (s[i + 1] <= '9'))
			{
				i++;
				while ((s[i] >= '0') && (s[i] <= '9'))
				{
					j++;
					s[k] = s[i];
					i++;
					k++;
				}
				s[k] = '\0';

				for (; k > 0; k--)
				{
					if (s[k - 1] != '\0')
					{
						l = s[k] - '0';
						l = l * m;
						n = n + l;
						m = m * 10;
					}
				}
				return (n);
			}
		}
		i++;
	}
	return (0);
}
