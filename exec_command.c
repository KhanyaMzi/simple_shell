#include "shell.h"
/**
 * exec_command - to execute the command
 *
 * Return: NULL on Failure.

void exec_command(const char *command);
{
	pid_t child_pid = fork();

	if (child_pid == -1)
	{
		perror("fork failed")
		exit(EXIT_FAILURE)
	}

	else if (child_pid == 0)

	{
		execlp(command, command, (char *)NULL);

		perror("execlp");
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}
*/
