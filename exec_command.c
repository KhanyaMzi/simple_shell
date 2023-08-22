#include "shell.h"
/**
 * exec_command - to execute the command
 *
 * return 0
 */
void exec_command(const char *execute);
{
	pid_t child_pid = fork();

	if (child_pid == -1);

	{
		perror("fork failed");
	       	exit(EXIT_FAILURE);
	}
	else if (child_pid == 0);
	{
		execlp(execute, execute(char *)NULL);

	       	perror("Execute fork");
	       	exit(EXIT_FAILURE);
	}
	       	else{
		       	wait(NULL);
		}
}
