#include "main.h"
/**
 * create_file - creates or truncates existing files
 * @filename: file to be created/modified
 * @text_content: file content
 * Return: execution value
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i;

	i = fd = 0;
	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_TRUNC);
	if (fd == -1)
	{
		close(fd);
		fd = open(filename, O_CREAT, S_IRUSR | S_IWUSR);
	}
	if (fd == -1)
		return (-1);
	while (text_content[i])
		i++;
	if (text_content != NULL)
		write(fd, text_content, i);
	close(fd);
	return (1);
}
