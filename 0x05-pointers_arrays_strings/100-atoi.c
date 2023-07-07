#include "main.h"

/**
 * _atoi - converts string to an integer
 * @s: string to be converted
 * Return: the converted value
 */
int _atoi(char *s)
{
	int i, ic, ir, sign, pv;
	unsigned int rtn;

	rtn = ir = ic = sign = i = 0;
	pv = 1;
	while (s[i] != '\0')
	{
		if (s[i] == '+')
			sign++;
		else if (s[i] == '-')
			sign--;
		if (s[i] >= '0' && s[i] <= '9')
		{
			ic = i;
			while ((s[ic] >= '0' && s[ic] <= '9') && (s[ic] != '\0'))
				ic++;
			ic--;
			break;
		}
		i++;
	}
	while (ic >= i)
	{
		rtn += ((s[ic] - '0') * pv);
		pv *= 10;
		ic--;
	}
	if (rtn > 2147483647)
		return (0);
	ir = rtn;
	if (sign < 0)
		return (-ir);
	return (ir);
}
