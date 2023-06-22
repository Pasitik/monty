#include "monty.h"

/**
 * pint - Prints the value at the top of the stack.
 * @stack: Pointer to the stack.
 * @line_no: Line number where the pint function is called.
 */

void pint(stack_t **stack, unsigned int line_no)
{
	(void) stack;
	if (args->head == NULL)
	{
		dprintf(2, "L%d: can't pint, stack empty\n", line_no);
		free_all_args();
		exit(EXIT_FAILURE);
	}

	printf("%d\n", args->head->n);
}
