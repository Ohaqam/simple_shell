#include "oma.h"

/**
* main - Entry point
* Description: my own shell that execute some command.
* @argv: array of arguments
* @argc: number of arguments
*
* Return: return 0.
*/
int st;
extern char **environ;
int main(int argc, char **argv )
{
	(void)argc;
	oma(argv);
	/*printf ("%d", st);*/
	return(st);
}
