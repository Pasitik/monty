#include "monty.h"

/**
 *tokenization - tokenizes the line read from the file
 */
void tokenization(void)
{
	int count = 0;
	char *delims = " \n", *token = NULL, *linecpy = NULL;

	linecpy = malloc(sizeof(char) * (strlen(args->line) + 1));
	strcpy(linecpy, args->line);
	args->n_toks = 0;
	token = strtok(linecpy, delims);
	while (token)
	{
		args->n_toks += 1;
		token = strtok(NULL, delims);
	}
	args->toks = malloc(sizeof(char *) * (args->n_toks + 1));
	strcpy(linecpy, args->line);
	token = strtok(linecpy, delims);
	while (token)
	{
		args->toks[count] = malloc(sizeof(char) * (strlen(token) +1));
		if (args->toks[count] == NULL)
			malloc_failed();
		strcpy(args->toks[count], token);
		token = strtok(NULL, delims);
		count++;
	}
	args->toks[count] = NULL;
	free(linecpy);
}
