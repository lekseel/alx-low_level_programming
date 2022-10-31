#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file if file sxists
 * @filename: name of the file
 * @text_content: string to append to file
 * Return: 1 if the file exists
 * -1 if the file doesnt exist or unable to access file permissions
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, len);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
