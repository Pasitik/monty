#include "monty.h"

/**
 * get_cmd - Handles an unknown instruction error.
 */
void get_cmd(void)
{
	int i = 0;
	instruction_t cmds[] = {
		{"push", &push}, {"pop", &pop},
		{"pint", &pint}, {"swap", &swap},
		{"nop", &nop}, {"add", &add},
		{"pall", &pall}, {"sub", &sub},
		{"div", &_div}, {"mul", &mul},
		{"rotl", &rotl}, {"rotr", &rotr},
		{"stack", &stack}, {"queue", &queue},
		{"pstr", &pstr}, {"pchar", &pchar},
		{"mod", &mod},
		{NULL, NULL}
	};
	if (args->n_toks == 0)
		return;
	if (args->toks[0][0] == '#')
	{
		args->instruction->opcode = "nop";
		args->instruction->f = nop;
		return;
	}
	for (; cmds[i].opcode != NULL; i++)
	{
		if (strcmp(cmds[i].opcode, args->toks[0]) == 0)
		{
			args->instruction->opcode = cmds[i].opcode;
			args->instruction->f = cmds[i].f;
			return;
		}
	}
	invalid_cmd();
}

