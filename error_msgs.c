#include "monty.h"

/**
 * code_err - Print error message for failed push
 * @line_num: line number of command
 */
void code_err(unsigned int line_num)
{
	fprintf(stderr, "L%d: usage: push integer\n", line_num);
	free_close();
}

/**
 * unknown - Print error message for incorrect command
 * @op: command
 * @line_num: line number of command
 */
void unknown(char *op, int *line_num)
{
	fflush(stderr);
	fprintf(stderr, "L%d: unknown instruction %s\n", *line_num, op);
	free_close();
}

/**
 * monty_usage_err - Error message when monty usage is wrong
 */
void monty_usage_err(void)
{
	fflush(stderr);
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}

/**
 * open_file_err - Error message when file can't be opened
 * @file_name: name of file that failed to open
 */
void open_file_err(char *file_name)
{
	fflush(stderr);
	fprintf(stderr, "Error: Can't open file %s\n", file_name);
	exit(EXIT_FAILURE);
}

/**
 * malloc_err - Error message when malloc fails
 */
void malloc_err(void)
{
	fflush(stderr);
	fprintf(stderr, "Error: malloc failed\n");
	free_close();
}
