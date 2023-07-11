#ifndef MAIN_H
#define MAIN_H

/* print function */
int _putchar(char c);

/* Question 0 */
char *create_array(unsigned int size, char c);
void simple_print_buffer(char *buffer, unsigned int size);

/* Question 1 */
char *_strdup(char *str);

/* Question 2 */
char *str_concat(char *s1, char *s2);

/* Question 3 */
int **alloc_grid(int width, int height);

/* Question 4 */
void free_grid(int **grid, int height);

/* Question 5 */
char *argstostr(int ac, char **av);

/* Question 6 */
char **strtow(char *str);

#endif
