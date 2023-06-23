#include "monty.h"

/**
 * rotr - rotates the stack to the bottom
 * @stack: Pointer to the stack.
 * @line_no: Line number where the mul function is called.
 */

void rotr(stack_t **stack, unsigned int line_no)
{
	stack_t *temp, *end;

	(void) stack;
	(void) line_no;
	if (args->stack_length < 2)
		return;

	temp = args->head;
	while (temp)
	{
		if (temp->next == NULL)
		{
			end = temp;
			break;
		}
		temp = temp->next;
	}

	end->prev->next = NULL;
	end->next = args->head;
	end->prev = NULL;

	args->head = end;
}
