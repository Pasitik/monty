#include "monty.h"

/**
 * push - Pushes an integer onto the stack.
 * @stack: Pointer to the stack.
 * @line_no: Line number where the push function is called.
 */
void push(stack_t **stack, unsigned int line_no)
{
	if (args->n_toks <= 1 || !(is_digit(args->toks[1])))
	{
		free_args();
		dprintf(2, "L%d: usage: push integer\n", line_no);
		exit(EXIT_FAILURE);
	}

	*stack = malloc(sizeof(stack_t));
	if (*stack == NULL)
		malloc_failed(); 
	(*stack)->n = (int) atoi(args->toks[1]);

	if (args->head != NULL)
	{
		(*stack)->next = args->head;
		args->head->prev = *stack;
	}
	args->head = *stack;
	args->stack_length += 1;
}
