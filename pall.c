#include "monty.h"

/**
 * pall - Prints all the elements in the stack.
 * @stack: Pointer to the stack.
 * @line_num: Line number where the pall function is called.
 */
void pall(stack_t **stack, unsigned int line_num)
{
	stack_t *temp;

	if (args->head == NULL)
		return;

	(void) line_num;
	(void) stack;

	temp = args->head;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
