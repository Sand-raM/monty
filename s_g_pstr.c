#include "monty.h"
/**
 * s_g_pstr - prints the string starting at the top of the stack
 * @hd: head of the stack
 * @num_ln: counts num lines
 * Return: nothing to be returned
*/
void s_g_pstr(stack_t **hd, unsigned int num_ln)
{
	stack_t *head;
	(void)num_ln;

	head = *hd;
	while (head)
	{
		if (head->n > 127 || head->n <= 0)
		{
			break;
		}
		printf("%c", head->n);
		head = head->next;
	}
	printf("\n");
}
