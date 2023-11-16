#include "monty.h"
/**
 * s_g_pchar - prints the char at the top of the stack
 * @hd: head of the stack
 * @num_ln: counts num lines
 * Return: nothing to be returned
 */
void s_g_pchar(stack_t **hd, unsigned int num_ln)
{
	stack_t *head;

	head = *hd;
	if (!head)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", num_ln);
		fclose(bus.fl);
		free(bus.cntnt);
		s_g_free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	if (head->n > 127 || head->n < 0)
	{
		fprintf(stderr, "L%d: Can't pchar, value out of range\n", num_ln);
		fclose(bus.fl);
		free(bus.cntnt);
		s_g_free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", head->n);
}
