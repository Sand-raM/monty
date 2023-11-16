#include "monty.h"

/**
 * s_g_pall - prints all the values on the stack
 * starting from the top of the stack
 * @hd: top/head of the stack
 * @num_ln: counts num of lines
 * Return: nothing to be returned
 */
void s_g_pall(stack_t **hd, unsigned int num_ln)
{
	stack_t *head;
	(void)num_ln;
	head = *hd;

	if (head == NULL)
	return;

	while (head)
	{
		printf("%d\n", head->n);
		head = head->next;
	}
}
