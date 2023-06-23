#include "monty.h"

/**
 * pchar - Prints the chars at the top of the stack
 * @stack: Pointer to a stack
 * @line_num: Line number the command is
 */
void pchar(s_node *stack, unsigned int line_num)
{
	int temp = 0;

	(void)stack;

	if (my_node->current == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_num);
		free_close();
	}
	temp = my_node->current->n;
	if (temp >= 0 && temp <= 127)
		printf("%c\n", temp);
	else
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_num);
		free_close();
	}
}
