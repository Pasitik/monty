#include "monty.h"

/**
 * getting_stream_failed - Handles the error when reading a file fails.
 * @fileName: The name of the file that failed to open.
 */
void getStream(char *file)
{
    int fd; 
    
    fd = open(file, O_RDONLY);
    if (fd == -1)
        stream_get_failed(file);
    args->stream = fdopen(fd, "r");
    if (args->stream == NULL)
    {
        close(fd);
        stream_get_failed(file);
    }
}
