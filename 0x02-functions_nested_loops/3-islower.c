#include "main.h"
/**
 * _islower - checks for lowercase characters
 * @c: input for the function
 * Return: returns either 1 or 0 depending on the state of the value input
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
		return (1);
	else
		return (0);
}
