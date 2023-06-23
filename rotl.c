#include "monty.h"

/**
 * rotl - rotates the stack to the top
 * @stack: Pointer to the stack.
 * @line_no: Line number where the mul function is called.
 */
void rotl(stack_t **stack, unsigned int line_no)
{
	stack_t *temp1, *temp2;

	(void) stack;
	(void) line_no;
	if (args->stack_length < 2)
		return;

	temp1 = args->head;
	temp2 = temp1->next;
	args->head = temp2;
	while (temp2)
	{
		if (temp2->next == NULL)
		{
			temp2->next = temp1;
			temp1->next = NULL;
			temp1->prev = temp2;
			break;
		}

		temp2 = temp2->next;
	}
}
