#include "monty.h"

/**
 * free_tokens - Frees the allocated memory for tokens.
 */

void free_tokens(void)
{
	int i = 0;

	if (args->toks == NULL)
		return;

	while (args->toks[i])
	{
		free(args->toks[i]);
		i++;
	}
	free(args->toks);
	args->toks = NULL;
}
