#include "monty.h"

/**
 * add - Adds the top two elements of the stack.
 * @stack: Pointer to the stack.
 * @line_no: Line number where the add function is called.
 */
void add(stack_t **stack, unsigned int line_no)
{
	stack_t *temp1, *temp2;

	(void) stack;
	if (args->stack_length < 2)
	{
		dprintf(2, "L%d: can't add, stack too short\n",
				line_no);
		free_all_args();
		exit(EXIT_FAILURE);
	}

	temp1 = args->head;
	temp2 = temp1->next;

	temp2->n = temp1->n + temp2->n;
	stack_node_del();

	args->stack_length -= 1;
}
