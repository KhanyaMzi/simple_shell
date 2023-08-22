#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#Include <stdlib.h>
#include <string.h>
#include unstd.h>
#include <stdbool.h>

void _prompt(void);promp
void _print (const char* commands);
void user_input(char*commands, size_t size);
void exec_command(const char *commands);

#endif
