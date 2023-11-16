#include "oma.h"

/**
 * omamap - see location
 * @oma_cmd: command
 *
 * Return: return path.
 */

char *omamap(char *oma_cmd)
{
	char *path, *path_cpy, *pth, *map = NULL;
	int len = 0, maplen;
	struct stat statbuf;

	if (stat(oma_cmd, &statbuf) == 0)
	{
		map = malloc(sizeof(char) * strlen(oma_cmd));
		strcpy(map, oma_cmd);
		return (map); }
	path = getenv("PATH");
	if (path != NULL)
	{
		path_cpy = strdup(path);
		len = strlen(oma_cmd);
		pth = strtok(path_cpy, ":");
		while (pth != NULL)
		{
			maplen = strlen(pth);
			map = malloc(maplen + len + 2);
			strcpy(map, pth);
			strcat(map, "/");
			strcat(map, oma_cmd);
			strcat(map, "\0");
			if (stat(map, &statbuf) == 0)
			{
				free(path_cpy);
				return (map);
			}
			else
			{
				free(map);
				pth = strtok(NULL, ":"); }
		}
		free(path_cpy);
		return (NULL); }
	return (NULL); }
