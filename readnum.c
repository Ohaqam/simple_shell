#include "oma.h"
int readnum(size_t read_num, char *oma_cmd)
{
	/*
	 * if (isatty((STDIN_FILENO)))
	 * write(1, "\n", 1);
	 * printf("%zd", read_num);
	 * read_num = 0;
	 * free(oma_cmd);
	 */

	if (isatty((STDIN_FILENO)))
		write(1, "\n", 1);
	free(oma_cmd);
	return (read_num);
}
