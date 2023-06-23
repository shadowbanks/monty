#include "monty.h"

/**
 * free_stack - Free a stack
 */
void free_stack(void)
{
	s_node temp = NULL, temp2 = NULL;

	if (my_node == NULL)
		return;
	temp = my_node->current;
	if (temp == NULL)
		return;
	while (temp)
	{
		temp2 = temp->next;
		free(temp);
		temp = temp2;
	}
}

/**
 * free_close - Free all necessary memory and exit with failure
 */
void free_close(void)
{
	free_stack();
	fclose(my_node->fd);
	free(my_node);
	exit(EXIT_FAILURE);
}
