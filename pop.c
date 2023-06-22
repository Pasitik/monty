#include "monty.h"

/**
 * pop - Removes the top element from the stack.
 * @stack: Pointer to the stack.
 * @line_no: Line number where the pop function is called.
 */
void pop(stack_t **stack, unsigned int line_no)
{
	(void) stack;
	if (args->head == NULL)
	{
		dprintf(2, "L%d: can't pop an empty stack\n", line_no);
		free_all_args();
		exit(EXIT_FAILURE);
	}

	stack_node_del();
	args->stack_length -= 1;
}
