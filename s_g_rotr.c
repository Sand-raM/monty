#include "monty.h"

/**
 * s_g_rotr- a func that rotates the stack to the bottom
 * @hd: head of the stack
 * @num_ln: counts num lines
 * Return: no return
 */
void s_g_rotr(stack_t **hd, __attribute__((unused)) unsigned int num_ln)
{
	stack_t *cp;

	cp = *hd;
	if (*hd == NULL || (*hd)->next == NULL)
	{
		return;
	}
	while (cp->next)
	{
		cp = cp->next;
	}
	cp->next = *hd;
	cp->prev->next = NULL;
	cp->prev = NULL;
	(*hd)->prev = cp;
	(*hd) = cp;
}
