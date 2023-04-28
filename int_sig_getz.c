#include "shell.h"

/**
 * get_sigint - gadzirisa crtl + c hunza prompt
 * @sig: simbisa zvadedzwa
 */
void get_sigint(int sig)
{
	(void)sig;
	write(STDOUT_FILENO, "\n^-^ ", 5);
}
