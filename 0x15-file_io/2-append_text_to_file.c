#include "main.h"
/**
 * append_text_to_file - in the name
 * @filename: name of modification file
 * @text_content: text to append to *filename
 * Return: syscall return values
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;

	i = fd = 0;
	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}
	if (text_content != NULL)
		while (text_content[i])
			i++;
	fd = write(fd, text_content, i);
	return (fd != -1 ? 1 : -1);
}
