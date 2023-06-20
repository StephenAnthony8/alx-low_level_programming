#include "main.h"

/**
 * _islower - checks for lowercase characters
 * @c: takes in the input value
 * Return: returns either 1 or zero depending on outcome
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
		return (1);
	else
		return (0);
}
