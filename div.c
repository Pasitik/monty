#include "monty.h"

/**
 * _div - Divides the second top element of the stack by the top element.
 * @stack: Pointer to the stack.
 * @line_no: Line number where the _div function is called.
 */

void _div(stack_t **stack, unsigned int line_no)
{
	stack_t *temp1, *temp2;

	(void) stack;
	if (args->stack_length < 2)
	{
		dprintf(2, "L%d: can't div, stack too short\n", line_no);
		free_all_args();
		exit(EXIT_FAILURE);
	}

	temp1 = args->head;
	temp2 = temp1->next;

	if (temp1->n == 0)
	{
		dprintf(2, "L%d: division by zero\n", line_no);
		free_all_args();
		exit(EXIT_FAILURE);
	}

	temp2->n = temp2->n / temp1->n;
	stack_node_del();

	args->stack_length -= 1;
}
