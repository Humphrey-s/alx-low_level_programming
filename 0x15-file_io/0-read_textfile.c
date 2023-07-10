#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include <stdlib.h>
/**
 * read_textfile - reads contents of a file and prints it to POSIX
 * @filename: the file
 * @letters: number of letters to printed
 * Return: (Success)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char BUFF[BUFSIZ + 1];
	int i;

	FILE *fd;

	if (filename == NULL)
	{
		return (0);
	}
	else
	{
		fd = fopen(filename, "r");

		fread(&BUFF, letters, 1, fd);

		i = write(1, &BUFF, letters);
	
		fclose(fd);
		if (i < 0)
		{
			return (0);
		}
		else
		{
			return (letters);
		}
	}
}
