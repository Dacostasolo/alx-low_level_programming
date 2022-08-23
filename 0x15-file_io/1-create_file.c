#include "main.h"

/**
 * create_file - create a file.
 * @filename: filename.
 * @text_content: content to write in the file.
 *
 * Return: 1 if success. -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int ptr;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);
	ptr = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (ptr == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (nletters = 0; text_content[nletters]; nletters++)
		;
	rwr = write(ptr, text_content, nletters);
	if (rwr == -1)
		return (-1);
	close(ptr);

	return (1);
}
