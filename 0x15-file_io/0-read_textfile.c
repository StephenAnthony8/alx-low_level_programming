#include "main.h"
/**
 * read_textfile - reads a non empty text file
 * @filename: file to be read
 * @letters: number of bytes to be writted to stdout
 * Return: number of bytes or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r_value;
	size_t n_bytes = 0;
	int open_fd = 0;
	char *file_i;

	if (letters > SSIZE_MAX || !filename)
		return (0);

	open_fd = open(filename, O_RDONLY);
	if (open_fd < 3)
	{
		close(open_fd);
		return (0);
	}
	file_i = malloc(sizeof(char) * letters);
	n_bytes = read(open_fd, file_i, letters);
	if (n_bytes == letters || n_bytes > 0)
		r_value = write(STDOUT_FILENO, file_i, n_bytes);

	close(open_fd);
	free(file_i);
	return (r_value);
}
