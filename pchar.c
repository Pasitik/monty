#include "monty.h"

/**
 * pchar - prints the char at the top of the stack,
 * followed by a new line
 * @stack: Pointer to the stack.
 * @line_no: Line number where the mul function is called.
 */
void pchar(stack_t **stack, unsigned int line_no)
{
	stack_t *temp1;

	(void) stack;
	if (args->head == NULL)
	{
		dprintf(2, "L%d: can't pchar, stack empty\n", line_no);
		free_all_args();
		exit(EXIT_FAILURE);
	}

	temp1 = args->head;

	if (temp1->n < 0 || temp1->n > 127)
	{
		dprintf(2, "L%d: can't pchar, value out of range\n", line_no);
		free_all_args();
		exit(EXIT_FAILURE);
	}

	printf("%c\n", temp1->n);
}
