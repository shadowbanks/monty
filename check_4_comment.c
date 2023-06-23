#include "monty.h"

/**
 * check_4_comment - Check if a line is a comment
 * @op: The first string read
 *
 * Return: 0 (if it's a comment), else 1
 */
int check_4_comment(char *op)
{
	if (op)
	{
		if (op[0] == '#')
			return (0);
	}
	return (1);
}
