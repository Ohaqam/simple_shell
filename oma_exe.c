#include "oma.h"

/**
* omaexe - execuoting the command.
* @tok: array of tokens.
* @argv: array of arguments.
*
* Return: int.
*/

int omaexe(char **tok, char **argv)
{
	pid_t my_pid;
	char *cmd = NULL;
	

	cmd = omamap(tok[0]);
	if(cmd == NULL)
	{
		write(2, argv[0], strlen(argv[0]));
			write(2, ": 1: ", 5);
			write(2, tok[0], strlen(tok[0]));
			write(2, ": not found", 11);
			write(2, "\n", 1);
			st = 127;
		return (st);
	}
	
	my_pid = fork();
	if (my_pid == 0)
	{
		if (execve(cmd, tok, NULL) == -1)
		{
			write(2, argv[0], strlen(argv[0]));
			write(2, ": 1: ", 5);
			write(2, tok[0], strlen(tok[0]));
			write(2, ": not found", 11);
			write(2, "\n", 1);
			st = 127;
		return (st);

		}
		return (0);
	}
	else
	{
		wait(NULL);
		free(cmd);

	}

	return (0);
}
