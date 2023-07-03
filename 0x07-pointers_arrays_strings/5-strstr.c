#include "main.h"
/**
 * _strstr - checks if string contains 'needle' subtring
 * @haystack: str to be checked
 * @needle: comparison str
 * Return: string value
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = needle;
		char *b = haystack;

		while (*b == *a && *a != '\0')
		{
			a++;
			b++;
		}
		if (*a == '\0')
			return (haystack);
	}
	return (0);
}
