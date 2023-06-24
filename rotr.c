#include "monty.h"

/**
 * rotr - Move the bottom of the stack to the top
 * @stack: Pointer to a stack
 * @line_num: Line the command was found
 */
void rotr(s_node *stack, unsigned int line_num)
{
	s_node temp = NULL;

	(void)line_num;
	if (my_node->current == NULL)
		return;

	temp = (*stack)->prev;
	my_node->current->prev = *stack;
	(*stack)->next = my_node->current;
	(*stack)->prev = NULL;
	temp->next = NULL;
	my_node->current = *stack;
	*stack = temp;
	my_node->head = *stack;
}
