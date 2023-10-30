#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - function that reads a text file and prints it to POSIX
 * @filename: name of the file
 * @letters: number of letters to read and print
 *
 * Return: Always 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *buffer;
ssize_t bytes_read;
ssize_t bytes_written;
if (filename == NULL)
{
return (0);
}
fd = open(filename, O_RDONLY);
if (fd == -1)
{
return (0);
}
buffer = (char *) malloc(sizeof(char) * (letters + 1));
if (buffer == NULL)
{
close(fd);
return (0);
}
bytes_read = read(fd, buffer, letters);
if (bytes_read == -1)
{
close(fd);
free(buffer);
return (0);
}
bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
{
close(fd);
free(buffer);
return (0);
}

close(fd);
free(buffer);
return (bytes_read);
}
