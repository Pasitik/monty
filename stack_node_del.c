#include "monty.h"

/**
* stack_node_del - delete node at the head/top
* Return: void
*/
void stack_node_del(void)
{
	stack_t *temp;

	temp = args->head;
	args->head = temp->next;
	free(temp);
}
