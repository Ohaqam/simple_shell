#include "oma.h"

/**
 * oma - semple shell that execute some command
 * Description: my own shell that execute some command.
 * @argv: array of arguments
 *
 * Return: return 0.
 */

int oma(char **argv)
{
	char *oma_cmd = NULL, **env = environ, **tok;
	size_t size = 0, envbuf;
	ssize_t read_num = 0;
	int i, j;

	while (1)
	{
		i = 0, j = 0;
		if (isatty((STDIN_FILENO)))
			write(1, "$ ", 2);
		read_num = getline(&oma_cmd, &size, stdin);
		if (read_num == -1)
		{
			read_num = readnum(read_num, oma_cmd);
			return (st);
		}
		tok = toknizing(oma_cmd, i, size);
		if (tok == NULL)
			continue;
		if (strcmp(tok[0], "exit") == 0)
		{
			freetok(tok);
			free(oma_cmd);
			exit(EXIT_SUCCESS); }
		
		if (strcmp(tok[0], "env") == 0)
		{
		
			while (env[j] != NULL)
			{
			
				envbuf = strlen(env[j]);

				write(1, env[j], envbuf);
				
				j++; }
			freetok(tok);
			free(oma_cmd);
			return (0); }
		omaexe(tok, argv);
		freetok(tok); }
	free(oma_cmd);
	return (0); }
