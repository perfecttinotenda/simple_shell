#include "shell.h"

/**
 * cmp_env_name - yenzanisa ma env ese
 * @nenv: zita rema env variable
 * @name: zita raita
 *
 * Return: 0 if are not equal. Another value if they are.
 */
int cmp_env_name(const char *nenv, const char *name)
{
	int i;

	for (i = 0; nenv[i] != '='; i++)
	{
		if (nenv[i] != name[i])
		{
			return (0);
		}
	}

	return (i + 1);
}

/**
 * _getenv - tora ma env var
 * @name: zita env var
 * @_environ: env var
 *
 * Return: ma values ema env var
 */
char *_getenv(const char *name, char **_environ)
{
	char *ptr_env;
	int i, mov;

	/* Init ptr_env val */
	ptr_env = NULL;
	mov = 0;
	/* tarisa env var */
	/* env yakaiswa mumu soro mefile */
	for (i = 0; _environ[i]; i++)
	{
		/* kana zita ne env zvaka enzana */
		mov = cmp_env_name(_environ[i], name);
		if (mov)
		{
			ptr_env = _environ[i];
			break;
		}
	}

	return (ptr_env + mov);
}

/**
 * _env - budisa_env var
 *
 * @datash: budisa zvese
 * Return: 1 kana zvakaitwa
 */
int _env(data_shell *datash)
{
	int i, j;

	for (i = 0; datash->_environ[i]; i++)
	{

		for (j = 0; datash->_environ[i][j]; j++)
			;

		write(STDOUT_FILENO, datash->_environ[i], j);
		write(STDOUT_FILENO, "\n", 1);
	}
	datash->status = 0;

	return (1);
}
