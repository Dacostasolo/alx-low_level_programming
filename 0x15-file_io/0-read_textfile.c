#include <main.h>

/**
 * read_textfile - read a text file and print the letters
 * @filename: filename.
 * @letters: number of letters to print
 *
 * Return: number of letter printed. If it fails, it returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int ptr;
	char *buf;

	ssize_t rptr,wptr;

	if(!filename)
		return (0);

	ptr = open(filename, O_RDONLY);
	if(ptr == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if(!buf) 
		return (0);

	rptr = read(ptr, buf, letters);
	wptr = write(STDOUT_FILENO, buf, rptr);

	close(ptr);

	free(buf);

	return (wptr);


}
