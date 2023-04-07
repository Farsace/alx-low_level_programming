#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename is the name of the file
 * @text_content: text content is the NULL terminated string to add at the end of the file
 *
 * Return: return 1 if the file exists. return -1 if the file does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int mlet;
	int rw;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (mlet = 0; text_content[mlet]; mlet++)
			;

		rw = write(fd, text_content, mlet);

		if (rw == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
