#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include <fcntl.h>
#include <limits.h>

/* print function */
int _putchar(char c);

/* question 0 */
ssize_t read_textfile(const char *filename, size_t letters);

/* question 1 */
int create_file(const char *filename, char *text_content);

/*question 2 */
int append_text_to_file(const char *filename, char *text_content);


#endif
