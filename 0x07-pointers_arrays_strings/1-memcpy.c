#include <stdio.h>
/**
 * 1-memcpy.c - copies memory from src to dest
 * @src: the address of memory to print
 * @dest: the memory address to copy to 
 * @n: an unsigned int
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	for(i, i < n, i++)
	{
		dest[i] = src[i];
	}
	return(dest);
}
