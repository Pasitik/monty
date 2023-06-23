#include "monty.h"

/**
 * pstr - prints the string starting at the top of the stack,
 * followed by a new line
 * @stack: Pointer to the stack.
 * @line_no: Line number where the mul function is called.
 */
void pstr(stack_t **stack, unsigned int line_no)
{
	stack_t *temp1;

	(void) stack;
	(void) line_no;

	temp1 = args->head;

	while (temp1 != NULL)
	{
		if (temp1->n <= 0 || temp1->n > 127)
			break;
		printf("%c", temp1->n);
		temp1 = temp1->next;
	}

	printf("\n");
}
