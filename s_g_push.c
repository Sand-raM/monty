#include "monty.h"

/**
 * s_g_push - a func that adds a node to te stack
 * @hd: topmost of the stack
 * @num_ln: counts number lines
 * Return: noting to be returned
 */
void s_g_push(stack_t **hd, unsigned int num_ln)
{
	int n, x = 0, flg = 0;

	if (bus.s_g_arg)
	{
		if (bus.s_g_arg[0] == '-')
			x++;
		for (; bus.s_g_arg[x] != '\0'; x++)
		{
			if (bus.s_g_arg[x] > 57 || bus.s_g_arg[x] < 48)
				flg = 1; }
		if (flg == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", num_ln);
			fclose(bus.fl);
			free(bus.cntnt);
			s_g_free_stack(*hd);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", num_ln);
	fclose(bus.fl);
	free(bus.cntnt);
	s_g_free_stack(*hd);
	exit(EXIT_FAILURE); }
	n = atoi(bus.s_g_arg);
		if (bus.flg_chng == 0)
			nod_add(hd, n);
		else
			queue_add(hd, n);
}
