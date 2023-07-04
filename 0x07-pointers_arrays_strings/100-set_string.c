#include "main.h"
/**
 * set_string - Converts the pointer of a pointer to point to 'to'
 * @s: pointer of pointer
 * @to: pointer
 */
void set_string(char **s, char *to)
{
	*s = to;
}
