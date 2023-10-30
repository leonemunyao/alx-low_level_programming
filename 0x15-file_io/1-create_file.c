#include "main.h"
#include <string.h>

/**
 * create_file - Creates a file with the specified name.
 * @filename: The name of the file to create.
 * @text_content: A NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
int descriptor;
int write_result;

if (filename == NULL)
{
return (-1);
}

descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (descriptor == -1)
{
return (-1);
}

if (text_content != NULL)
{
write_result = write(descriptor, text_content, strlen(text_content));
if (write_result == -1)
{
close(descriptor);
return (-1);
}
}

close(descriptor);

return (1);
}
