#include "oma.h"

/**
 * toknizing - toknizing the command.
 * @oma_cmd: the command.
 * @i: array size.
 * @n: command size.
 *
 * Return: tok.
 */

char **toknizing(char *oma_cmd, int i, int n)
{
	char *token = NULL;
	char *delim = " \n\t";
	char **tok;

	token = strtok(oma_cmd, delim);
	tok = malloc(sizeof(char *) * n);
	

        while (token != NULL)
	{
		tok[i] = malloc(sizeof(char) * (strlen(token) + 1));
		strcpy(tok[i], token);
		token = strtok(NULL, delim);
		i++;
	}
	tok[i] = NULL;
		if (i == 0)
	       {
			free(tok);
			tok = NULL;
		   }
    return (tok);
}
