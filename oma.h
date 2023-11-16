#ifndef OMA_H
#define OMA_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
extern int st;
extern char **environ;
int oma(char **argv);
char **toknizing(char *oma_cmd,  int i, int n);
void freetok(char **tok);
int readnum(size_t read_num, char *oma_cmd);
int omaexe(char **tok, char **argv);
char *omamap(char *oma_cmd);

#endif
