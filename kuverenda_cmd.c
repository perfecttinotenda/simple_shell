#include "shell.h"

/**
 * read_line - verenga tambo
 *
 * @i_eof: dzosa fanksheni
 * Return: isa tambo
 */
char *read_line(int *i_eof)
{
	char *input = NULL;
	size_t bufsize = 0;

	*i_eof = getline(&input, &bufsize, stdin);

	return (input);
}
