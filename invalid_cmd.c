#include "monty.h"

/**
 * invalid_cmd - Handles an unknown instruction error.
 */

void invalid_cmd(void)
{
	dprintf(2, "L%d: unknown instruction %s\n",
			args->line_no, args->toks[0]);
	close_stream();
	free_tokens();
	free_args();
	exit(EXIT_FAILURE);
}

