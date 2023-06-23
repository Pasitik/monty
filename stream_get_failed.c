#include "monty.h"

/**
 * stream_get_failed - Handles the error wnen stream fails
 * @file: file containing cmds
 */
void stream_get_failed(char *file)
{
	dprintf(2, "Error: cant open file %s\n", file);
	free_args();
	exit(EXIT_FAILURE);
}
