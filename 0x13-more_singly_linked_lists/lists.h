#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
#include <stdlib.h>
/* definitions */

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/* functions */
/* print function */
int _putchar(char c);

/* question 0 */
size_t print_listint(const listint_t *h);

/* question 1 */
size_t listint_len(const listint_t *h);

/* question 2 */
listint_t *add_nodeint(listint_t **head, const int n);

/* question 3 */
listint_t *add_nodeint_end(listint_t **head, const int n);

/* question 4 */
void free_listint(listint_t *head);

/* question 5 */
void free_listint2(listint_t **head);

/* question 6 */
int pop_listint(listint_t **head);

/* question 7 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

/* question 8 */
int sum_listint(listint_t *head);

/* question 9 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

/* question 10 */
int delete_nodeint_at_index(listint_t **head, unsigned int index);

#endif /* LISTS_H */
