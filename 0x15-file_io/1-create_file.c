#include "main.h"
/**
 * create_file - creates or truncates existing files
 * @filename: file to be created/modified
 * @text_content: file content
 * Return: execution value
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i, wr_tc;

	i = fd = 0;
	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}
	if (text_content)
		while (text_content[i])
			i++;
	wr_tc = write(fd, text_content, i);
	close(fd);

	return (wr_tc != -1 ? 1 : -1);
}
