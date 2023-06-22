#include "monty.h"

/**
 * malloc_failed - Handles the error when malloc fails to allocate memory.
 */
void stream_get_failed(char *file)
{
    dprintf(2, "Error: cant open file %s\n", file);
    /* free_args(); */
    exit(EXIT_FAILURE);
}
