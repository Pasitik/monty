#include "monty.h"

/**
 * run_cmd - Runs the instruction specified by the arguments.
 */

void run_cmd(void)
{
	stack_t *stack = NULL;

	if (args->n_toks == 0)
		return;

	args->instruction->f(&stack, args->line_no);
}
