#include "shell.h"

/**
 * _print - print command
 *
 * Return: pointer
*/

void _print (const char *commands)
{
	write(STDOUT_FILENO, *commands strlen(commands));
}
{
	write(STDOUT_FILENO)
}
