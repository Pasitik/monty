#include "monty.h"

/**
 * free_head - Frees the memory allocated for the head and
 * sets it to NULL.
 */

void free_head(void)
{
	if (args->head)
		free_stack(args->head);

	args->head = NULL;
}

/**
* free_args - free memory allocated to arguments pointer
*/

void free_args(void)
{
	if (args == NULL)
		return;

	if (args->instruction)
	{
		free(args->instruction);
		args->instruction = NULL;
	}

	free_head();

	if (args->line)
	{
		free(args->line);
		args->line = NULL;
	}

	free(args);
}
