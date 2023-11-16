#include "monty.h"
#define _GNU_SOURCE

bus_t bus = {NULL, NULL, NULL, 0};
/**
 * main - ENTRY POINT
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (successful)
 */

int main(int argc, char *argv[])
{
	char *cntnt;
	FILE *fl;
	ssize_t read_line = 1;
	size_t size = 0;
	stack_t *stack = NULL;
	unsigned int num_ln = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fl = fopen(argv[1], "r");
	bus.fl = fl;
	if (!fl)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
	}
	while (read_line > 0)
	{
		cntnt = NULL;
		read_line = getline(&cntnt, &size, fl);
		bus.cntnt = cntnt;
		num_ln++;
		if (read_line > 0)
		{
			s_g_exec(cntnt, &stack, num_ln, fl);
		}
		free(cntnt);
	}
	s_g_free_stack(stack);
	fclose(fl);

	return (0);
}
