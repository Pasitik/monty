#include "monty.h"

/**
 * sub - Subtracts the top element of the stack from the second top element.
 * @stack: Pointer to the stack.
 * @line_no: Line number where the sub function is called.
 */

void sub(stack_t **stack, unsigned int line_no)
{
	stack_t *temp1, *temp2;

	(void) stack;
	if (args->stack_length < 2)
	{
		dprintf(2, "L%d: can't sub, stack too short\n", line_no);
		free_all_args();
		exit(EXIT_FAILURE);
	}

	temp1 = args->head;
	temp2 = temp1->next;

	temp2->n = temp2->n - temp1->n;
	stack_node_del();

	args->stack_length -= 1;
}
