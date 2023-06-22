#include "monty.h"

/**
 * initialize_arguments - Initializes a pointer to
 * arg_s structure.
 */
void args_init()
{
    args = malloc(sizeof(argument));
    if (args == NULL)
        malloc_failed();
        
    args->stream = NULL;
    args->line = NULL;
	args->line_no = 0;
	args->n_toks = 0;
	args->instruction = malloc(sizeof(instruction_t));
	if (args->instruction == NULL)
		malloc_failed();
	args->head = NULL;
	args->stack_length = 0;
	args->stack = 1;
}
