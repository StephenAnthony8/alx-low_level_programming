#include "main.h"
/**
 * file_cp - copies from one file to another
 * @file_from: file copied from
 * @file_to: copy destination
 * Return: exit /success codes
 */
int file_cp(char *file_from, char *file_to)
{
	int fd, fd_2, c_value, c_value2;
	int b_read, f_write;
	unsigned int perm;
	char buffer[1024];

	perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	if (!file_from)
		return (98);
	else if (!file_to)
		return (99);
	fd = open(file_from, O_RDONLY);
	fd_2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, perm);
	if (fd == -1 || fd_2 == -1)
	{
		c_value = close(fd);
		c_value2 = close(fd_2);
		if (c_value == -1 || c_value2 == -1)
			return (c_value == -1 ? fd : fd_2);
		return (fd == -1 ? 98 : 99);
	}
	while ((b_read = read(fd, buffer, 1024)))
	{
		f_write = write(fd_2, buffer, b_read);
		if (b_read == -1 || f_write == -1)
		{
			c_value = close(fd);
			c_value2 = close(fd_2);
			if (c_value == -1 || c_value2 == -1)
				return (c_value == -1 ? fd : fd_2);
			return (b_read == -1 ? 98 : 99);
		}
	}
	return (1);

}
/**
 * main - executes the program
 * @argc: number of arguments
 * @argv: arguments being parsed
 * Return: exit value
 */
int main(int argc, char **argv)
{
	int ex_code;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp  file_from file_to\n");
		exit(97);
	}
	ex_code = file_cp(argv[1], argv[2]);
	switch (ex_code)
	{
		case 1:

			return (0);
		case 98:
			dprintf(2, "Error: Can't read from %s", argv[1]);
			exit(98);
		case 99:
			dprintf(2, "Error: Can't write to %s", argv[2]);
			exit(99);
		default:
			dprintf(2, "Error: Can't close fd %d", ex_code);
			exit(100);

	}
	return (0);
}
