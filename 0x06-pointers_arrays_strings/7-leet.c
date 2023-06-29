#include "main.h"
/**
 * leet - Rewrites string n in leet
 * @n: string to be rewritten
 * Return: returns rewritten string
 */
char *leet(char *n)
{
	int i, j;
	char alphaB[] = "AEOTL", alphaS[] = "aeotl", leet[] = "43071";

	i = 0;
	while (n[i] != '\0')
	{
		j = 0;
		while (j <= 4)
		{
			if ((n[i] == alphaS[j]) || (n[i] == alphaB[j]))
			{
				n[i] = leet[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (n);
}
