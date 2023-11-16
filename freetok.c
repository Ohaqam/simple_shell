#include "oma.h"

/**
 * freetok - free array.
 * @tok: array of tokens.
 *
 */

void freetok(char **tok)
{
	int i;

	for (i = 0; tok[i] != NULL; i++)
	{
		free(tok[i]);
	}
	free(tok);
}
