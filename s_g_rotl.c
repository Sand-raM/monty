#include "monty.h"

/**
 * s_g_rotl- a func that rotates the stack to the top
 * @hd: head of the stack
 * @num_ln: counts num lines
 * Return: nothing to be returned
 */
void s_g_rotl(stack_t **hd,  __attribute__((unused)) unsigned int num_ln)
{
	stack_t *temp = *hd, *auxi;

	if (*hd == NULL || (*hd)->next == NULL)
	{
		return;
	}
	auxi = (*hd)->next;
	auxi->prev = NULL;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = *hd;
	(*hd)->next = NULL;
	(*hd)->prev = temp;
	(*hd) = auxi;
}
