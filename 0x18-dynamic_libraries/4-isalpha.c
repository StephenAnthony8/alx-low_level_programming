#include "main.h"
/**
 * _isalpha - checks for alphabetic characters
 * @c: input for the function
 * Return: returns either 1 or 0 depending on the state of the value input
 */
int _isalpha(int c)
{
	if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
		return (1);
	else
		return (0);
}
