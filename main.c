#include "monty.h"
argument *args = NULL;

/**
 *
 *
 *
 */
int main(int argc, char **argv)
{
    size_t n =0;
    
    args_validation(argc);
    args_init();
    getStream(argv[1]);
    
    while(getline(&args->line, &n, args->stream) != -1)
    {
        args->line_no += 1;
		tokenization();
		get_cmd();
		run_cmd();
		free_tokens(); 
    }
	close_stream();
	free_args(); 

    return (0);
}
