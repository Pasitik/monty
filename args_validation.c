#include "monty.h"

/**
 * args_validation - function for validation
 * argc: number of cmd line args
 *
 * Return: retuns void
 */
void args_validation(int argc)
{
    if (argc != 2)
    {
        dprintf(2, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }
    return;
}
