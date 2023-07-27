#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* print function */
int _putchar(char c);

/* question 0 */
size_t print_list(const list_t *h);

/*question 1 */


/* question 2 */


/* question 3 */


/* question 4 */


/* advanced questions */
#endif

