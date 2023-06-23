#include "monty.h"

/**
 * pint_stack - Print value of a top of the stack
 * @stack: pointer to the stack
 * @line_num: line number
 *
 * Return: Nothing
 */
void pint_stack(s_node *stack, unsigned int line_num)
{
	(void)stack;

	if (my_node->current == NULL)
	{
		fflush(stderr);
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_num);
		free_close();
	}
	printf("%d\n", my_node->current->n);
}
